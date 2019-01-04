#ifndef GENERATED_ASN1SCC_CORRESPONDENCEMAP3D_H
#define GENERATED_ASN1SCC_CORRESPONDENCEMAP3D_H
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
    asn1SccPoint3D source;
    asn1SccPoint3D sink;
    asn1SccT_Float probability;
} asn1SccCorrespondence3D;

#define asn1SccCorrespondence3D_REQUIRED_BYTES_FOR_ENCODING       91 
#define asn1SccCorrespondence3D_REQUIRED_BITS_FOR_ENCODING        728
#define asn1SccCorrespondence3D_REQUIRED_BYTES_FOR_ACN_ENCODING   91 
#define asn1SccCorrespondence3D_REQUIRED_BITS_FOR_ACN_ENCODING    728
#define asn1SccCorrespondence3D_REQUIRED_BYTES_FOR_XER_ENCODING   570

void asn1SccCorrespondence3D_Initialize(asn1SccCorrespondence3D* pVal);
flag asn1SccCorrespondence3D_IsConstraintValid(const asn1SccCorrespondence3D* val, int* pErrCode);


typedef struct {    int nCount; 
    
    asn1SccCorrespondence3D arr[51200];
} asn1SccCorrespondenceMap3D;

#define asn1SccCorrespondenceMap3D_REQUIRED_BYTES_FOR_ENCODING       4659202 
#define asn1SccCorrespondenceMap3D_REQUIRED_BITS_FOR_ENCODING        37273616
#define asn1SccCorrespondenceMap3D_REQUIRED_BYTES_FOR_ACN_ENCODING   4659202 
#define asn1SccCorrespondenceMap3D_REQUIRED_BITS_FOR_ACN_ENCODING    37273616
#define asn1SccCorrespondenceMap3D_REQUIRED_BYTES_FOR_XER_ENCODING   29184043

void asn1SccCorrespondenceMap3D_Initialize(asn1SccCorrespondenceMap3D* pVal);
flag asn1SccCorrespondenceMap3D_IsConstraintValid(const asn1SccCorrespondenceMap3D* val, int* pErrCode);
#ifndef ERR_asn1SccCorrespondenceMap3D 
#define ERR_asn1SccCorrespondenceMap3D		1001  /*(SIZE(0 .. correspondeceMap3DElementsMax))*/
#endif

extern const asn1SccT_UInt32 correspondeceMap3DElementsMax; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccCorrespondence3D_Encode(const asn1SccCorrespondence3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondence3D_Decode(asn1SccCorrespondence3D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondence3D_ACN_Encode(const asn1SccCorrespondence3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondence3D_ACN_Decode(asn1SccCorrespondence3D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondenceMap3D_Encode(const asn1SccCorrespondenceMap3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondenceMap3D_Decode(asn1SccCorrespondenceMap3D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccCorrespondenceMap3D_ACN_Encode(const asn1SccCorrespondenceMap3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccCorrespondenceMap3D_ACN_Decode(asn1SccCorrespondenceMap3D* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif