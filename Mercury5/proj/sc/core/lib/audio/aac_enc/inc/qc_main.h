/*
   Quantizing & coding
 */
#ifndef _QC_MAIN_H
#define _QC_MAIN_H

#include "qc_data.h"
#include "interface.h"
#include "aac_ram.h"

/* Quantizing & coding stage */

Word16 QCOutNew(QC_OUT *hQC, Word16 nChannels);

void QCOutDelete(QC_OUT *hQC);

Word16 QCNew(QC_STATE *hQC);

Word16 QCInit(QC_STATE *hQC, 
              struct QC_INIT *init);

void QCDelete(QC_STATE *hQC);


Word16 QCMain(QC_STATE *hQC,
              Word16 nChannels,
              ELEMENT_BITS* elBits,
              ATS_ELEMENT* adjThrStateElement,
              PSY_OUT_CHANNEL psyOutChannel[MAX_CHANNELS], /* may be modified in-place */
              QC_OUT_CHANNEL  qcOutChannel[MAX_CHANNELS],   /* out                      */
              QC_OUT_ELEMENT* qcOutElement,
              Word16 ancillaryDataBytes);     /* returns error code       */

void updateBitres(QC_STATE* qcKernel,
                  QC_OUT* qcOut);

Word16 FinalizeBitConsumption(QC_STATE *hQC,
                              QC_OUT* qcOut);

Word16 AdjustBitrate(QC_STATE *hQC,
                     Word32 bitRate,
                     Word32 sampleRate);

#endif /* _QC_MAIN_H */
