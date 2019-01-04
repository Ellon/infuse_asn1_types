#ifndef GENERATED_ASN1SCC_JOINTLIMITS_H
#define GENERATED_ASN1SCC_JOINTLIMITS_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "taste-types.h"
#include "JointLimitRange.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {    int nCount; 
    
    asn1SccJointLimitRange arr[60];
} asn1SccJointLimits_ranges;

#define asn1SccJointLimits_ranges_REQUIRED_BYTES_FOR_ENCODING       7801 
#define asn1SccJointLimits_ranges_REQUIRED_BITS_FOR_ENCODING        62406
#define asn1SccJointLimits_ranges_REQUIRED_BYTES_FOR_ACN_ENCODING   7801 
#define asn1SccJointLimits_ranges_REQUIRED_BITS_FOR_ACN_ENCODING    62406
#define asn1SccJointLimits_ranges_REQUIRED_BYTES_FOR_XER_ENCODING   44621

void asn1SccJointLimits_ranges_Initialize(asn1SccJointLimits_ranges* pVal);
flag asn1SccJointLimits_ranges_IsConstraintValid(const asn1SccJointLimits_ranges* val, int* pErrCode);
#ifndef ERR_asn1SccJointLimits_ranges 
#define ERR_asn1SccJointLimits_ranges		1001  /*(SIZE(1 .. maxJointLimitsSize))*/
#endif

typedef struct {
    asn1SccT_String vector_name;
    asn1SccJointLimits_ranges ranges;
} asn1SccJointLimits;

#define asn1SccJointLimits_REQUIRED_BYTES_FOR_ENCODING       8058 
#define asn1SccJointLimits_REQUIRED_BITS_FOR_ENCODING        64463
#define asn1SccJointLimits_REQUIRED_BYTES_FOR_ACN_ENCODING   8058 
#define asn1SccJointLimits_REQUIRED_BITS_FOR_ACN_ENCODING    64463
#define asn1SccJointLimits_REQUIRED_BYTES_FOR_XER_ENCODING   45163

void asn1SccJointLimits_Initialize(asn1SccJointLimits* pVal);
flag asn1SccJointLimits_IsConstraintValid(const asn1SccJointLimits* val, int* pErrCode);


extern const asn1SccT_UInt32 maxJointLimitsSize; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccJointLimits_ranges_Encode(const asn1SccJointLimits_ranges* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccJointLimits_ranges_Decode(asn1SccJointLimits_ranges* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccJointLimits_ranges_ACN_Encode(const asn1SccJointLimits_ranges* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccJointLimits_ranges_ACN_Decode(asn1SccJointLimits_ranges* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccJointLimits_Encode(const asn1SccJointLimits* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccJointLimits_Decode(asn1SccJointLimits* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccJointLimits_ACN_Encode(const asn1SccJointLimits* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccJointLimits_ACN_Decode(asn1SccJointLimits* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif