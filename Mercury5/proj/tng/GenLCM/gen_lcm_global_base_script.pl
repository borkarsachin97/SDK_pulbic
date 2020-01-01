#!/usr/bin/perl

use warnings;
use strict;


my $version = "v0.12";

my $cnum = 0;
my $total = 0;

# �ΨӰO���D�諸���G 
my @saveFileList;
my @saveFileName;
my $filecount = 0;

my $str1;
my $str2;

my @nonCheck = ("global_base", "allinone_base", "cust_lcd_base.c", "cust_lcd_PCICard.c");


# �bnonCkeck������Ƨ� or �ɮ�, �O���O�d�� 
sub compareNonCheck
{
	my $folderName = shift;
	for (0 ... $#nonCheck)
	{
		if ($folderName =~ /$nonCheck[$_]/)
		{
			return 1;
		}
	}
}


# global_base_script.sh�O�����u���D�� 
sub check_script
{
	chdir "global_base";
	print "Enter path: global_base\n";
	
	
	open (SOUR, "global_base_script.sh");
	open (DEST, ">global_base_script_.sh");
	chdir "../";
	
	
	while(<SOUR>)
	{
		if($_ =~ /#!\/bin\/bash/)
		{
			next;
		}
		
		if($_ =~ /#/)
		{
			print DEST "$_";
			next;
		}
		
		
		$_ =~ /cp ([\d\w\s\/\_\.]*)lcm\/\/([\d\w\s\/\_\.]*)cust_lcd_([0-9A-Za-z\_]*).c  ([\d\w\s\/\_\.]*)cust_lcd_([0-9A-Za-z\_]*).c/;	
		print "$_";
		print "1 : $1, 2 : $2, 3 : $3, 4 : $4, 5 : $5\n";
		
		
		# �ɮ׭Y�s�b -> �u���D��, �ɮ׭Y���s�b -> �n�O���ӷ� 
		print "$2cust_lcd_$3.c\n";
		if(-e "$2cust_lcd_$3.c")
		{
			print "have file\n";
			$saveFileList[$filecount] = "$1lcm//$2cust_lcd_$3.c";
			$saveFileName[$filecount] = "cust_lcd_$5.c";
			$filecount += 1;
		}
		else
		{
			print "no file\n";
			print DEST "#$_";
		}
	}
	close SOUR;
	close DEST;
}


# �D���ɮ� 
sub check
{
	my $pathname = shift;
	my $filenum = 0;
	print "Enter path: $pathname\n";
	
	
	#�w��.c���ɮ�, ����O�_�n�O�d 
	my @cfiles = <*.c>;
	for my $item1 (@cfiles)
	{
			if (compareNonCheck($item1))
			{
				print "noncheck : $item1 !\n";
				next;
			}
	
			my $found = 0;
			print "\t\t str1 : $item1 -> ";
			$item1 =~ /cust_lcd_([0-9A-Za-z]*)(_[0-9A-Za-z]*)?\.c/;
			$str1 = $1;
			print "$str1\n";
			
			
			#�ۦP�ɦW�u�d����쪺 
			for my $item2 (@saveFileList)
			{	
				print "\t\t str2 : $item2 -> ";
				$item2 =~ /sc[\d\w\/_]*cust_lcd_([0-9A-Za-z]*)(_[0-9A-Za-z]*)?\.c/;
				$str2 = $1;
				print "$str2\n";
				
				if ($str2 =~ /$str1/ && $str1 =~ /$str2/)
				{
					print "\t\t match : $str1\n";
					$found = 1;
					last;
				}
			}
			
			
			if ($found == 1)
			{
				$found = 0;
				next;
			}
		
		
			$filenum += 1;
			$saveFileList[$filecount] = "$pathname/$item1";
			$saveFileName[$filecount] = "cust_lcd_$str1.c";
			$filecount += 1;
			print "\t save file: $item1\n";
	}
	print "save $filenum C files\n";
	$cnum += $filenum;
	

	#search�l��Ƨ� 
	my @dir = <*>;
	for (@dir)
	{
		if (-d $_)
		{
			if (!($_ =~ /_base/) || compareNonCheck($_))
			{
				print "noncheck : $_ !\n";
				next;
			}
			
			chdir $_;
			check("$pathname/$_");
			chdir "..\\";
		}
	}
}



my $scdir = "sc/customer/product/cust/drv/lcm/";
chdir "$scdir";


check_script;
check("$scdir");
printf "Total save files C:$cnum \n";


open (SOUR, "global_base/global_base_script_.sh");
open (DEST, ">global_base/global_base_script.sh");
print DEST "#!/bin/bash\n";


# �Y�L���N�ӷ�, ��X�����ƥ��O�� 
print "\n\nprocess comment\n";
while(<SOUR>)
{
	my $flag = 0;
	$str1 = $_;
	print "$str1\n";
	
	for (0 ... @saveFileList)
	{
		if ($saveFileName[$_] eq "")
		{
			next;
		}
		
		my $temp = $saveFileName[$_];
		if($temp !~ /cust_lcd_g/)
		{
			$temp =~ s/cust_lcd_/cust_lcd_g/g;
		}
		
		print "$temp\n";
		if($str1 =~ /$temp/)
		{
			print "get it!\n";
			$flag = 1;
			last;
		}
	}
	
	if($flag eq 0)
	{
		print DEST $str1;
	}
}


# ��X�D�ﵲ�G, �ç�W 
for (0 ... @saveFileList)
{
	if ($saveFileName[$_] eq "")
	{
		next;
	}
	
	my $temp = $saveFileName[$_];
	if($temp !~ /cust_lcd_g/)
	{
		$temp =~ s/cust_lcd_/cust_lcd_g/g;
	}
	print "Save file :  $saveFileList[$_], $temp\n";
	print DEST "cp $saveFileList[$_]  $scdir/global_base/$temp\n";
}
close(SOUR);
close(DEST);

`rm "global_base/global_base_script_.sh"`;

chdir "../../../../../../";


