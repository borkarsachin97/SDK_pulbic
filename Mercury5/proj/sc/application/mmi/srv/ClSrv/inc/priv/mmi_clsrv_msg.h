#ifndef __MMI_CLSRV_CLMSG_H__
#define __MMI_CLSRV_CLMSG_H__


//---------------------------------------------------------------------------
#ifndef CL_ZONEID_UNKNOW
#define CL_ZONEID_UNKNOW 	0
#endif

#define CL_ZONEID_INC 	    1
#define CL_ZONEID_HOME 	    2

#define CL_ZONEID_HK 	    3
#define CL_ZONEID_MC        4   //Macau
#define CL_ZONEID_TW        5

#define CL_ZONEID_Yidong    6
#define CL_ZONEID_Liantong  7   //
#define CL_ZONEID_Dianxin   8   //
#define CL_ZONEID_Wangtong  9   //

#define CL_ZONEID_Beijing   10

#define CL_ZONEID_SJZ       11  //ʯ��ׯ
#define CL_ZONEID_Taiyuan   12  //
#define CL_ZONEID_Jinan     13  //
#define CL_ZONEID_Zhengzhou 14  //
#define CL_ZONEID_Harbin    15  //
#define CL_ZONEID_Hangzhou  16  //
#define CL_ZONEID_Hefei     17  //
#define CL_ZONEID_Fuzhou    18  //
#define CL_ZONEID_Nanchang  19  //

#define CL_ZONEID_Guangzhou 20
#define CL_ZONEID_Shanghai 	21
#define CL_ZONEID_Tianjin 	22
#define CL_ZONEID_Chongqing	23
#define CL_ZONEID_Shenyang	24
#define CL_ZONEID_Nanjing	25
//#define CL_ZONEID_XXXX    26
#define CL_ZONEID_Wuhan	    27
#define CL_ZONEID_Chengdu	28
#define CL_ZONEID_Xian	    29

#define CL_ZONEID_Hainan    30  //����
#define CL_ZONEID_HLJ       31  //������
#define CL_ZONEID_Jilin     32  //����
#define CL_ZONEID_Liaoning  33  //����
#define CL_ZONEID_NMG       34  //���ɹ�
#define CL_ZONEID_Xinjiang  35  //�½�
#define CL_ZONEID_Ningxia   36  //����
#define CL_ZONEID_Gansu     37  //����
#define CL_ZONEID_SHX       38  //����
#define CL_ZONEID_Shanxi    39  //ɽ��
#define CL_ZONEID_Hebei     40  //�ӱ�
#define CL_ZONEID_Henan     41  //����
#define CL_ZONEID_Shandong  42  //ɽ��
#define CL_ZONEID_Xizang    43  //����
#define CL_ZONEID_Qinghai   44  //�ຣ
#define CL_ZONEID_Yunnan    45  //����
#define CL_ZONEID_Sichuan   46  //�Ĵ�
#define CL_ZONEID_Hubei     47  //����
#define CL_ZONEID_Anhui     48  //����
#define CL_ZONEID_Guangxi   49  //����
#define CL_ZONEID_Guangdong 50  //�㶫
#define CL_ZONEID_Guizhou   51  //����
#define CL_ZONEID_Hunan     52  //����
#define CL_ZONEID_Jiangxi   53  //����
#define CL_ZONEID_Jiangsu   54  //����
#define CL_ZONEID_Zhejiang  55  //�㽭
#define CL_ZONEID_Fujian    56  //����

#define CL_ZONEID_Shenzhen  57  //
#define CL_ZONEID_Wenzhou   58  //
#define CL_ZONEID_Xiamen    59  //
#define CL_ZONEID_Changsha  60  //
#define CL_ZONEID_Qingdao   61  //
#define CL_ZONEID_Dongguan  62  //

#define CL_ZONEID_LEAFMARK  63  //
//---------------------------------------------------------------------------
#define CL_ZONEID_USA_Canada	101    //USA&Canada
#define CL_ZONEID_Russia		107    //
#define CL_ZONEID_Egypt			120    //
#define CL_ZONEID_Greece		130    //
#define CL_ZONEID_Netherlands	131    //
#define CL_ZONEID_Belgium		132    //����ʱ
#define CL_ZONEID_France		133    //
#define CL_ZONEID_Spain			134    //
#define CL_ZONEID_Hungary		136    //
#define CL_ZONEID_Italy			139    //

#define CL_ZONEID_Romania		140    //
#define CL_ZONEID_Switzerland	141    //
#define CL_ZONEID_Austria		143    //�µ���
#define CL_ZONEID_UK			144    //
#define CL_ZONEID_Denmark		145    //
#define CL_ZONEID_Sweden		146    //
#define CL_ZONEID_Norway		147    //
#define CL_ZONEID_Poland		148    //
#define CL_ZONEID_Germany		149    //
#define CL_ZONEID_Peru			151    //��³

#define CL_ZONEID_Mexico		152    //
#define CL_ZONEID_Cuba			153    //
#define CL_ZONEID_Argentina		154    //
#define CL_ZONEID_Brazil		155    //
#define CL_ZONEID_Chile		    156    //
#define CL_ZONEID_Colombia		157    //
#define CL_ZONEID_Venezuela		158    //ί������
#define CL_ZONEID_Malaysia		160    //
#define CL_ZONEID_Australia		161    //
#define CL_ZONEID_Indonesia		162    //

#define CL_ZONEID_Philippines	163    //
#define CL_ZONEID_NewZealand	164    //
#define CL_ZONEID_Singapore		165    //
#define CL_ZONEID_Thailand		166    //
#define CL_ZONEID_Japan			181    //
#define CL_ZONEID_SouthKorea	182    //
#define CL_ZONEID_China			186    //
#define CL_ZONEID_Turkey		190    //
#define CL_ZONEID_India			191    //
#define CL_ZONEID_Pakistan		192    //

#define CL_ZONEID_SriLanka		194    //
#define CL_ZONEID_Myanmar		195    //���
#define CL_ZONEID_Iran			198    //

//---------------------------------------------------------------------------
#define CL_ZONEID_0310	310//�ӱ�	������					4
#define CL_ZONEID_0311	311//�ӱ�	ʯ��ׯ��				4
#define CL_ZONEID_0312	312//�ӱ�	������					4
#define CL_ZONEID_0313	313//�ӱ�	�żҿ���				4
#define CL_ZONEID_0314	314//�ӱ�	�е���					4
#define CL_ZONEID_0315	315//�ӱ�	��ɽ��					4
#define CL_ZONEID_0316	316//�ӱ�	�ȷ���					4
#define CL_ZONEID_0317	317//�ӱ�	������					4
#define CL_ZONEID_0318	318//�ӱ�	��ˮ��					4
#define CL_ZONEID_0319	319//�ӱ�	��̨��					4

#define CL_ZONEID_0335	335//�ӱ�	�ػʵ���				4

#define CL_ZONEID_0349	349//ɽ��	˷��					4

#define CL_ZONEID_0350	350//ɽ��	������					4
#define CL_ZONEID_0351	351//ɽ��	̫ԭ��					4
#define CL_ZONEID_0352	352//ɽ��	��ͬ��					4
#define CL_ZONEID_0353	353//ɽ��	��Ȫ��					4
#define CL_ZONEID_0354	354//ɽ��	�ܴ���					4
#define CL_ZONEID_0355	355//ɽ��	������					4
#define CL_ZONEID_0356	356//ɽ��	������					4
#define CL_ZONEID_0357	357//ɽ��	�ٷ���					4
#define CL_ZONEID_0358	358//ɽ��	��ʯ					4
#define CL_ZONEID_0359	359//ɽ��	�˳���					4

#define CL_ZONEID_0370	370//ɽ��	������					4

#define CL_ZONEID_0371	371//����	֣����					4
#define CL_ZONEID_0372	372//����	������					4
#define CL_ZONEID_0373	373//����	������					4
#define CL_ZONEID_0374	374//����	�����					4
#define CL_ZONEID_0375	375//����	ƽ��ɽ��				4
#define CL_ZONEID_0376	376//����	������					4
#define CL_ZONEID_0377	377//����	������					4
#define CL_ZONEID_0378	378//����	������					4
#define CL_ZONEID_0379	379//����	������					4

#define CL_ZONEID_0391	391//����	������					4
#define CL_ZONEID_0392	392//����	�ױ���					4
#define CL_ZONEID_0393	393//����	�����					4
#define CL_ZONEID_0394	394//����	�ܿ���					4
#define CL_ZONEID_0395	395//����	�����					4
#define CL_ZONEID_0396	396//����	פ�����				4
#define CL_ZONEID_0398	398//����	����Ͽ��				4

#define CL_ZONEID_0410	410//����	������					4
#define CL_ZONEID_0411	411//����	������					4
#define CL_ZONEID_0412	412//����	��ɽ��					4
#define CL_ZONEID_0413	413//����	��˳��					4
#define CL_ZONEID_0414	414//����	��Ϫ��					4
#define CL_ZONEID_0415	415//����	������					4
#define CL_ZONEID_0416	416//����	������					4
#define CL_ZONEID_0417	417//����	Ӫ����					4
#define CL_ZONEID_0418	418//����	������					4
#define CL_ZONEID_0419	419//����	������					4

#define CL_ZONEID_0421	421//����	������					4
#define CL_ZONEID_0427	427//����	�̽���					4
#define CL_ZONEID_0429	429//����	��«����				4

#define CL_ZONEID_0431	431//����	������					4
#define CL_ZONEID_0432	432//����	������					4
#define CL_ZONEID_0433	433//����	�Ӽ���					4
#define CL_ZONEID_0434	434//����	��ƽ��					4
#define CL_ZONEID_0435	435//����	ͨ����					4
#define CL_ZONEID_0436	436//����	�׳���					4
#define CL_ZONEID_0437	437//����	��Դ��					4
#define CL_ZONEID_0438	438//����	������					4
#define CL_ZONEID_0439	439//����	��ɽ��					4

#define CL_ZONEID_0440	440//����	����					4
#define CL_ZONEID_0448	448//����	÷�ӿ���				4

#define CL_ZONEID_0451	451//������	��������				4
#define CL_ZONEID_0452	452//������	���������				4
#define CL_ZONEID_0453	453//������	ĵ������				4
#define CL_ZONEID_0454	454//������	��ľ˹��				4
#define CL_ZONEID_0455	455//������	�绯��					4
#define CL_ZONEID_0456	456//������	�ں���					4
#define CL_ZONEID_0457	457//������	�Ӹ����				4
#define CL_ZONEID_0458	458//������	������					4
#define CL_ZONEID_0459	459//������	������					4

#define CL_ZONEID_0464	464//������	��̨��					4
#define CL_ZONEID_0467	467//������	����					4
#define CL_ZONEID_0468	468//������	�׸�					4
#define CL_ZONEID_0469	469//������	˫Ѽɽ					4

#define CL_ZONEID_0470	470//���ɹ�	��������				4
#define CL_ZONEID_0471	471//���ɹ�	���ͺ�����				4
#define CL_ZONEID_0472	472//���ɹ�	��ͷ��					4
#define CL_ZONEID_0473	473//���ɹ�	�ں���					4
#define CL_ZONEID_0474	474//���ɹ�	������					4
#define CL_ZONEID_0475	475//���ɹ�	ͨ����					4
#define CL_ZONEID_0476	476//���ɹ�	�����					4
#define CL_ZONEID_0477	477//���ɹ�	��ʤ��					4
#define CL_ZONEID_0478	478//���ɹ�	�ٺ���					4
#define CL_ZONEID_0479	479//���ɹ�	���ֺ�����				4

#define CL_ZONEID_0482	482//���ɹ�	����������				4
#define CL_ZONEID_0483	483//���ɹ�	��������				4

#define CL_ZONEID_0510	510//����	������					3
#define CL_ZONEID_0511	511//����	����					3
#define CL_ZONEID_0512	512//����	������					3
#define CL_ZONEID_0513	513//����	��ͨ��					3
#define CL_ZONEID_0514	514//����	������					3
#define CL_ZONEID_0515	515//����	�γ���					3
#define CL_ZONEID_0516	516//����	������					3
#define CL_ZONEID_0517	517//����	������					3
#define CL_ZONEID_0518	518//����	���Ƹ���				3
#define CL_ZONEID_0519	519//����	������					3

#define CL_ZONEID_0520	520//����	������					3
#define CL_ZONEID_0523	523//����	̩����					3
#define CL_ZONEID_0527	527//����	��Ǩ��					3

#define CL_ZONEID_0530	530//ɽ��	������					4
#define CL_ZONEID_0531	531//ɽ��	������					4
#define CL_ZONEID_0532	532//ɽ��	�ൺ��					4
#define CL_ZONEID_0533	533//ɽ��	�Ͳ���					4
#define CL_ZONEID_0534	534//ɽ��	������					4
#define CL_ZONEID_0535	535//ɽ��	��̨��					4
#define CL_ZONEID_0536	536//ɽ��	Ϋ����					4
#define CL_ZONEID_0537	537//ɽ��	������					4
#define CL_ZONEID_0538	538//ɽ��	̩����					4
#define CL_ZONEID_0539	539//ɽ��	������					4

#define CL_ZONEID_0543	543//ɽ��	������					4
#define CL_ZONEID_0546	546//ɽ��	��Ӫ��					4

#define CL_ZONEID_0631	631//ɽ��	������					4
#define CL_ZONEID_0632	632//ɽ��	��ׯ��					4
#define CL_ZONEID_0633	633//ɽ��	������					4
#define CL_ZONEID_0634	634//ɽ��	������					4
#define CL_ZONEID_0635	635//ɽ��	�ĳ���					4

#define CL_ZONEID_0550	550//����	������					3
#define CL_ZONEID_0551	551//����	�Ϸ���					3
#define CL_ZONEID_0552	552//����	������					3
#define CL_ZONEID_0553	553//����	�ߺ���					3
#define CL_ZONEID_0554	554//����	������					3
#define CL_ZONEID_0555	555//����	��ɽ��				3
#define CL_ZONEID_0556	556//����	������					3
#define CL_ZONEID_0557	557//����	������					3
#define CL_ZONEID_0558	558//����	����/������				3
#define CL_ZONEID_0559	559//����	��ɽ��					3

#define CL_ZONEID_0561	561//����	������					3
#define CL_ZONEID_0562	562//����	ͭ����					3
#define CL_ZONEID_0563	563//����	������					3
#define CL_ZONEID_0564	564//����	������					3
#define CL_ZONEID_0565	565//����	������					3
#define CL_ZONEID_0566	566//����	������					3

#define CL_ZONEID_0570	570//�㽭	������					3
#define CL_ZONEID_0571	571//�㽭	������					3
#define CL_ZONEID_0572	572//�㽭	������					3
#define CL_ZONEID_0573	573//�㽭	������					3
#define CL_ZONEID_0574	574//�㽭	������					3
#define CL_ZONEID_0575	575//�㽭	������					3
#define CL_ZONEID_0576	576//�㽭	̨����					3
#define CL_ZONEID_0577	577//�㽭	������					3
#define CL_ZONEID_0578	578//�㽭	��ˮ��					3
#define CL_ZONEID_0579	579//�㽭	����					3

#define CL_ZONEID_0580	580//�㽭	��ɽ��					3

#define CL_ZONEID_0591	591//����	������					3
#define CL_ZONEID_0592	592//����	������					3
#define CL_ZONEID_0593	593//����	������					3
#define CL_ZONEID_0594	594//����	������					3
#define CL_ZONEID_0595	595//����	Ȫ����					3
#define CL_ZONEID_0596	596//����	������					3
#define CL_ZONEID_0597	597//����	������					3
#define CL_ZONEID_0598	598//����	������					3
#define CL_ZONEID_0599	599//����	��ƽ��					3

#define CL_ZONEID_0710	710    //����	�差��					3
#define CL_ZONEID_0711	711    //����	������					3
#define CL_ZONEID_0712	712    //����	Т����					3
#define CL_ZONEID_0713	713    //����	�Ƹ���					3
#define CL_ZONEID_0714	714    //����	��ʯ��					3
#define CL_ZONEID_0715	715    //����	������					3
#define CL_ZONEID_0716	716    //����	������					3
#define CL_ZONEID_0717	717    //����	�˲���					3
#define CL_ZONEID_0718	718    //����	��ʩ��					3
#define CL_ZONEID_0719	719    //����	ʮ����					3

#define CL_ZONEID_0722	722    //����	������					3
#define CL_ZONEID_0724	724    //����	������					3
#define CL_ZONEID_0728	728    //����	Ǳ����					3

#define CL_ZONEID_0730	730	//����	������					3
#define CL_ZONEID_0731	731	//����	��ɳ��					3
#define CL_ZONEID_0732	732	//����	��̶��					3
#define CL_ZONEID_0733	733	//����	������					3
#define CL_ZONEID_0734	734	//����	������					3
#define CL_ZONEID_0735	735	//����	������					3
#define CL_ZONEID_0736	736	//����	������					3
#define CL_ZONEID_0737	737	//����	������					3
#define CL_ZONEID_0738	738	//����	¦����					3
#define CL_ZONEID_0739	739	//����	������					3

#define CL_ZONEID_0743	743	//����	������					3
#define CL_ZONEID_0744	744	//����	�żҽ���				3
#define CL_ZONEID_0745	745	//����	������					3
#define CL_ZONEID_0746	746	//����	������					3

#define CL_ZONEID_0660	660	//�㶫	��β��					3
#define CL_ZONEID_0661	661	//�㶫	������					3
#define CL_ZONEID_0662	662	//�㶫	������					3
#define CL_ZONEID_0663	663	//�㶫	������					3
#define CL_ZONEID_0668	668	//�㶫	ï����					3

#define CL_ZONEID_0750	750	//�㶫	������					3
#define CL_ZONEID_0751	751	//�㶫	�ع���					3
#define CL_ZONEID_0752	752	//�㶫	������					3
#define CL_ZONEID_0753	753	//�㶫	÷����					3
#define CL_ZONEID_0754	754	//�㶫	��ͷ��					3
#define CL_ZONEID_0755	755	//�㶫	������					3
#define CL_ZONEID_0756	756	//�㶫	�麣��					3
#define CL_ZONEID_0757	757	//�㶫	��ɽ��					3
#define CL_ZONEID_0758	758	//�㶫	������					3
#define CL_ZONEID_0759	759	//�㶫	տ����					3

#define CL_ZONEID_0760	760	//�㶫	��ɽ��					3
#define CL_ZONEID_0762	762	//�㶫	��Դ��					3
#define CL_ZONEID_0763	763	//�㶫	��Զ��					3
#define CL_ZONEID_0765	765	//�㶫	˳����					3
#define CL_ZONEID_0766	766	//�㶫	�Ƹ���					3
#define CL_ZONEID_0768	768	//�㶫	������					3
#define CL_ZONEID_0769	769	//�㶫	��ݸ��					3

#define CL_ZONEID_0770	770	//����	���Ǹ���				3
#define CL_ZONEID_0771	771	//����	������					3
#define CL_ZONEID_0772	772	//����	������					3
#define CL_ZONEID_0773	773	//����	������					3
#define CL_ZONEID_0774	774	//����	������					3
#define CL_ZONEID_0775	775	//����	������					3
#define CL_ZONEID_0776	776	//����	��ɫ��					3
#define CL_ZONEID_0777	777	//����	������					3
#define CL_ZONEID_0778	778	//����	�ӳ���					3
#define CL_ZONEID_0779	779	//����	������					3

#define CL_ZONEID_0701	701//����	ӥ̶��					3

#define CL_ZONEID_0790	790//����	������					3
#define CL_ZONEID_0791	791//����	�ϲ���					3
#define CL_ZONEID_0792	792//����	�Ž���					3
#define CL_ZONEID_0793	793//����	������					3
#define CL_ZONEID_0794	794//����	������					3
#define CL_ZONEID_0795	795//����	�˴���					3
#define CL_ZONEID_0796	796//����	������					3
#define CL_ZONEID_0797	797//����	������					3
#define CL_ZONEID_0798	798//����	��������				3
#define CL_ZONEID_0799	799//����	Ƽ����					3

#define CL_ZONEID_0812  812//�Ĵ�	��֦����				3
#define CL_ZONEID_0813	813//�Ĵ�	�Թ���					3
#define CL_ZONEID_0816	816//�Ĵ�	������					3
#define CL_ZONEID_0817	817//�Ĵ�	�ϳ���					3
#define CL_ZONEID_0818	818//�Ĵ�	������					3
#define CL_ZONEID_0825	825//�Ĵ�	������					3
#define CL_ZONEID_0826	826//�Ĵ�	�㰲��					3
#define CL_ZONEID_0827	827//�Ĵ�	������					3
#define CL_ZONEID_0830	830//�Ĵ�	������					3
#define CL_ZONEID_0831	831//�Ĵ�	�˱���					3
#define CL_ZONEID_0832	832//�Ĵ�	�ڽ���					3
#define CL_ZONEID_0833	833//�Ĵ�	��ɽ��					3
#define CL_ZONEID_0834	834//�Ĵ�	��ɽ��					3
#define CL_ZONEID_0835	835//�Ĵ�	�Ű���					3
#define CL_ZONEID_0836	836//�Ĵ�	������					3
#define CL_ZONEID_0837	837//�Ĵ�	������					3
#define CL_ZONEID_0838	838//�Ĵ�	������					3
#define CL_ZONEID_0839	839//�Ĵ�	��Ԫ��					3

#define CL_ZONEID_0851	851//����	������					3
#define CL_ZONEID_0852	852//����	������					3
#define CL_ZONEID_0853	853//����	��˳��					3
#define CL_ZONEID_0854	854//����	ǭ����					3
#define CL_ZONEID_0855	855//����	ǭ������				3
#define CL_ZONEID_0856	856//����	ͭ�ʵ���				3
#define CL_ZONEID_0857	857//����	�Ͻڵ���				3
#define CL_ZONEID_0858	858//����	����ˮ��				3
#define CL_ZONEID_0859	859//����	ǭ������				3

#define CL_ZONEID_0691	691//����	��˫������				3
#define CL_ZONEID_0692	692//����	�º���					3

#define CL_ZONEID_0870	870//����	��ͨ��					3
#define CL_ZONEID_0871	871//����	������					3
#define CL_ZONEID_0872	872//����	������					3
#define CL_ZONEID_0873	873//����	�����					3
#define CL_ZONEID_0874	874//����	������					3
#define CL_ZONEID_0875	875//����	��ɽ��					3
#define CL_ZONEID_0876	876//����	��ɽ��					3
#define CL_ZONEID_0877	877//����	��Ϫ��					3
#define CL_ZONEID_0878	878//����	������					3
#define CL_ZONEID_0879	879//����	˼é����				3

#define CL_ZONEID_0883	883//����	�ٲ׵���				3
#define CL_ZONEID_0886	886//����	ŭ����					3
#define CL_ZONEID_0887	887//����	������					3
#define CL_ZONEID_0888	888//����	��������				3

#define CL_ZONEID_0807	807//����	˫��					3

#define CL_ZONEID_0891	891//����	������					3
#define CL_ZONEID_0892	892//����	�տ������				3
#define CL_ZONEID_0893	893//����	ɽ�ϵ���				3
#define CL_ZONEID_0894	894//����	��֥����				3
#define CL_ZONEID_0895	895//����	��������				3
#define CL_ZONEID_0896	896//����	��������				3
#define CL_ZONEID_0897	897//����	�������				3

#define CL_ZONEID_0890	890//����   ����
#define CL_ZONEID_0898	898//����	����
#define CL_ZONEID_0899	899//����	����

#define CL_ZONEID_0293	293//����	������					3
#define CL_ZONEID_0910	910//����	������(ԭ)				3
#define CL_ZONEID_0911	911//����	�Ӱ���					3
#define CL_ZONEID_0912	912//����	������					3
#define CL_ZONEID_0913	913//����	μ����					3
#define CL_ZONEID_0914	914//����	������					3
#define CL_ZONEID_0915	915//����	������					3
#define CL_ZONEID_0916	916//����	������					3
#define CL_ZONEID_0917	917//����	������					3
#define CL_ZONEID_0919	919//����	ͭ����					3

#define CL_ZONEID_0930	930//����	������					3
#define CL_ZONEID_0931	931//����	������					3
#define CL_ZONEID_0932	932//����	��������				3
#define CL_ZONEID_0933	933//����	ƽ����					3
#define CL_ZONEID_0934	934//����	������					3
#define CL_ZONEID_0935	935//����	����/�����				3
#define CL_ZONEID_0936	936//����	��Ҵ��					3
#define CL_ZONEID_0937	937//����	������/��Ȫ��			3
#define CL_ZONEID_0938	938//����	��ˮ��					3
#define CL_ZONEID_0939	939//����	¤�ϵ���				3

#define CL_ZONEID_0941	941//����	������					3
#define CL_ZONEID_0943	943//����	������					3

#define CL_ZONEID_0951	951//����	������					3
#define CL_ZONEID_0952	952//����	ʯ��ɽ��				3
#define CL_ZONEID_0953	953//����	������					3
#define CL_ZONEID_0954	954//����	��ԭ��					3
#define CL_ZONEID_0955	955//����	������					3

#define CL_ZONEID_0970	970//�ຣ	������					3
#define CL_ZONEID_0971	971//�ຣ	������					3
#define CL_ZONEID_0972	972//�ຣ	��������				3
#define CL_ZONEID_0973	973//�ຣ	������					3
#define CL_ZONEID_0974	974//�ຣ	������					3
#define CL_ZONEID_0975	975//�ຣ	������					3
#define CL_ZONEID_0976	976//�ຣ	������					3
#define CL_ZONEID_0977	977//�ຣ	������					3
#define CL_ZONEID_0979	979//�ຣ	���ľ					3

#define CL_ZONEID_0901	901//�½�	���ǵ���				3
#define CL_ZONEID_0902	902//�½�	���ܵ���				3
#define CL_ZONEID_0903	903//�½�	�������				3
#define CL_ZONEID_0906	906//�½�	����̩����				3
#define CL_ZONEID_0908	908//�½�	������		3
#define CL_ZONEID_0909	909//�½�	����������				3

#define CL_ZONEID_0990	990//�½�	����������				3
#define CL_ZONEID_0991	991//�½�	��³ľ����				3
#define CL_ZONEID_0992	992//�½�	������					3
#define CL_ZONEID_0993	993//�½�	ʯ������				3
#define CL_ZONEID_0994	994//�½�	������					3
#define CL_ZONEID_0995	995//�½�	��³������				3
#define CL_ZONEID_0996	996//�½�	����������				3
#define CL_ZONEID_0997	997//�½�	�����յ���				3
#define CL_ZONEID_0998	998//�½�	��ʲ����				3
#define CL_ZONEID_0999	999//�½�	�������				3


#define CL_ZONEID_MAX   1023

//---------------------------------------------------------------------------


#endif
