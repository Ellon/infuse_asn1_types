#ifndef GENERATED_ASN1SCC_RIGIDBODYACCELERATION_H
#define GENERATED_ASN1SCC_RIGIDBODYACCELERATION_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "Eigen.h"
#include "taste-types.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccTime ref_time;
    asn1SccVector3d acceleration;
    asn1SccMatrix3d cov_acceleration;
} asn1SccRigidBodyAcceleration;

#define asn1SccRigidBodyAcceleration_REQUIRED_BYTES_FOR_ENCODING       168 
#define asn1SccRigidBodyAcceleration_REQUIRED_BITS_FOR_ENCODING        1344
#define asn1SccRigidBodyAcceleration_REQUIRED_BYTES_FOR_ACN_ENCODING   168 
#define asn1SccRigidBodyAcceleration_REQUIRED_BITS_FOR_ACN_ENCODING    1344
#define asn1SccRigidBodyAcceleration_REQUIRED_BYTES_FOR_XER_ENCODING   1161

void asn1SccRigidBodyAcceleration_Initialize(asn1SccRigidBodyAcceleration* pVal);
flag asn1SccRigidBodyAcceleration_IsConstraintValid(const asn1SccRigidBodyAcceleration* val, int* pErrCode);


 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccRigidBodyAcceleration_Encode(const asn1SccRigidBodyAcceleration* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccRigidBodyAcceleration_Decode(asn1SccRigidBodyAcceleration* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccRigidBodyAcceleration_ACN_Encode(const asn1SccRigidBodyAcceleration* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccRigidBodyAcceleration_ACN_Decode(asn1SccRigidBodyAcceleration* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}

#endif

#endif
