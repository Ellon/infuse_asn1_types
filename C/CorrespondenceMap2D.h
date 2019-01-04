#ifndef GENERATED_ASN1SCC_CORRESPONDENCEMAP2D_H
#define GENERATED_ASN1SCC_CORRESPONDENCEMAP2D_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "Point.h"
#include "taste-types.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccPoint2D source;
    asn1SccPoint2D sink;
    asn1SccT_Float probability;
} asn1SccCorrespondence2D;

#define asn1SccCorrespondence2D_REQUIRED_BYTES_FOR_ENCODING       65 
#define asn1SccCorrespondence2D_REQUIRED_BITS_FOR_ENCODING        520
#define asn1SccCorrespondence2D_REQUIRED_BYTES_FOR_ACN_ENCODING   65 
#define asn1SccCorrespondence2D_REQUIRED_BITS_FOR_ACN_ENCODING    520
#define asn1SccCorrespondence2D_REQUIRED_BYTES_FOR_XER_ENCODING   428

void asn1SccCorrespondence2D_Initialize(asn1SccCorrespondence2D* pVal);
flag asn1SccCorrespondence2D_IsConstraintValid(const asn1SccCorrespondence2D* val, int* pErrCode);


typedef struct {    int nCount; 
    
    asn1SccCorrespondence2D arr[1024];
} asn1SccCorrespondenceMap2D;

#define asn1SccCorrespondenceMap2D_REQUIRED_BYTES_FOR_ENCODING       66562 
#define asn1SccCorrespondenceMap2D_REQUIRED_BITS_FOR_ENCODING        532491
#define asn1SccCorrespondenceMap2D_REQUIRED_BYTES_FOR_ACN_ENCODING   66562 
#define asn1SccCorrespondenceMap2D_REQUIRED_BITS_FOR_ACN_ENCODING    532491
#define asn1SccCorrespondenceMap2D_REQUIRED_BYTES_FOR_XER_ENCODING   438315

void asn1SccCorrespondenceMap2D_Initialize(asn1SccCorrespondenceMap2D* pVal);
flag asn1SccCorrespondenceMap2D_IsConstraintValid(const asn1SccCorrespondenceMap2D* val, int* pErrCode);
#ifndef ERR_asn1SccCorrespondenceMap2D 
#define ERR_asn1SccCorrespondenceMap2D		1001  /*(SIZE(0 .. correspondenceMap2DElementsMax))*/
#endif

extern const asn1SccT_UInt32 correspondenceMap2DElementsMax; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccCorrespondence2D_Encode(const asn1SccCorrespondence2D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondence2D_Decode(asn1SccCorrespondence2D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondence2D_ACN_Encode(const asn1SccCorrespondence2D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondence2D_ACN_Decode(asn1SccCorrespondence2D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondenceMap2D_Encode(const asn1SccCorrespondenceMap2D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondenceMap2D_Decode(asn1SccCorrespondenceMap2D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondenceMap2D_ACN_Encode(const asn1SccCorrespondenceMap2D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondenceMap2D_ACN_Decode(asn1SccCorrespondenceMap2D* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif