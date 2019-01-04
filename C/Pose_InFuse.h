#ifndef GENERATED_ASN1SCC_POSE_INFUSE_H
#define GENERATED_ASN1SCC_POSE_INFUSE_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "TransformWithCovariance.h"
#include "taste-types.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {    
    flag arr[7];
} asn1SccPose_InFuse_dataEstimated;

#define asn1SccPose_InFuse_dataEstimated_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccPose_InFuse_dataEstimated_REQUIRED_BITS_FOR_ENCODING        7
#define asn1SccPose_InFuse_dataEstimated_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccPose_InFuse_dataEstimated_REQUIRED_BITS_FOR_ACN_ENCODING    7
#define asn1SccPose_InFuse_dataEstimated_REQUIRED_BYTES_FOR_XER_ENCODING   181

void asn1SccPose_InFuse_dataEstimated_Initialize(asn1SccPose_InFuse_dataEstimated* pVal);
flag asn1SccPose_InFuse_dataEstimated_IsConstraintValid(const asn1SccPose_InFuse_dataEstimated* val, int* pErrCode);
#ifndef ERR_asn1SccPose_InFuse_dataEstimated 
#define ERR_asn1SccPose_InFuse_dataEstimated		1001  /*(SIZE(7))*/
#endif

typedef struct {
    asn1SccT_UInt32 msgVersion;
    asn1SccT_String producerId;
    asn1SccPose_InFuse_dataEstimated dataEstimated;
    asn1SccT_String parentFrameId;
    asn1SccTime parentTime;
    asn1SccT_String childFrameId;
    asn1SccTime childTime;
    asn1SccTransformWithCovariance transform;
} asn1SccPose_InFuse;

#define asn1SccPose_InFuse_REQUIRED_BYTES_FOR_ENCODING       2160 
#define asn1SccPose_InFuse_REQUIRED_BITS_FOR_ENCODING        17276
#define asn1SccPose_InFuse_REQUIRED_BYTES_FOR_ACN_ENCODING   2160 
#define asn1SccPose_InFuse_REQUIRED_BITS_FOR_ACN_ENCODING    17276
#define asn1SccPose_InFuse_REQUIRED_BYTES_FOR_XER_ENCODING   7482

void asn1SccPose_InFuse_Initialize(asn1SccPose_InFuse* pVal);
flag asn1SccPose_InFuse_IsConstraintValid(const asn1SccPose_InFuse* val, int* pErrCode);


extern const asn1SccT_UInt32 pose_InFuse_Version; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccPose_InFuse_dataEstimated_Encode(const asn1SccPose_InFuse_dataEstimated* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPose_InFuse_dataEstimated_Decode(asn1SccPose_InFuse_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPose_InFuse_dataEstimated_ACN_Encode(const asn1SccPose_InFuse_dataEstimated* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPose_InFuse_dataEstimated_ACN_Decode(asn1SccPose_InFuse_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPose_InFuse_Encode(const asn1SccPose_InFuse* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPose_InFuse_Decode(asn1SccPose_InFuse* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPose_InFuse_ACN_Encode(const asn1SccPose_InFuse* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPose_InFuse_ACN_Decode(asn1SccPose_InFuse* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif