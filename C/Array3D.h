#ifndef GENERATED_ASN1SCC_ARRAY3D_H
#define GENERATED_ASN1SCC_ARRAY3D_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-types.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef enum {
    asn1Sccdepth_8U = 0,
    asn1Sccdepth_8S = 1,
    asn1Sccdepth_16U = 2,
    asn1Sccdepth_16S = 3,
    asn1Sccdepth_32S = 4,
    asn1Sccdepth_32F = 5,
    asn1Sccdepth_64F = 6
} asn1SccArray3D_depth_t;

#define asn1SccArray3D_depth_t_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccArray3D_depth_t_REQUIRED_BITS_FOR_ENCODING        3
#define asn1SccArray3D_depth_t_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccArray3D_depth_t_REQUIRED_BITS_FOR_ACN_ENCODING    3
#define asn1SccArray3D_depth_t_REQUIRED_BYTES_FOR_XER_ENCODING   54

void asn1SccArray3D_depth_t_Initialize(asn1SccArray3D_depth_t* pVal);
flag asn1SccArray3D_depth_t_IsConstraintValid(const asn1SccArray3D_depth_t* val, int* pErrCode);
#ifndef ERR_asn1SccArray3D_depth_t_unknown_enumeration_value 
#define ERR_asn1SccArray3D_depth_t_unknown_enumeration_value		1002  /**/
#endif
#ifndef ERR_asn1SccArray3D_depth_t 
#define ERR_asn1SccArray3D_depth_t		1001  /**/
#endif

typedef struct {    int nCount; 
    
    byte arr[66355200];
} asn1SccArray3D_data;

#define asn1SccArray3D_data_REQUIRED_BYTES_FOR_ENCODING       66356215 
#define asn1SccArray3D_data_REQUIRED_BITS_FOR_ENCODING        530849720
#define asn1SccArray3D_data_REQUIRED_BYTES_FOR_ACN_ENCODING   66355204 
#define asn1SccArray3D_data_REQUIRED_BITS_FOR_ACN_ENCODING    530841626
#define asn1SccArray3D_data_REQUIRED_BYTES_FOR_XER_ENCODING   132710429

void asn1SccArray3D_data_Initialize(asn1SccArray3D_data* pVal);
flag asn1SccArray3D_data_IsConstraintValid(const asn1SccArray3D_data* val, int* pErrCode);
#ifndef ERR_asn1SccArray3D_data 
#define ERR_asn1SccArray3D_data		1003  /*(SIZE(0 .. array3DMaxBytes))*/
#endif

typedef struct {
    asn1SccT_UInt32 msgVersion;
    asn1SccT_UInt32 rows;
    asn1SccT_UInt32 cols;
    asn1SccT_UInt32 channels;
    asn1SccArray3D_depth_t depth;
    asn1SccT_UInt32 rowSize;
    asn1SccArray3D_data data;
} asn1SccArray3D;

#define asn1SccArray3D_REQUIRED_BYTES_FOR_ENCODING       66356236 
#define asn1SccArray3D_REQUIRED_BITS_FOR_ENCODING        530849883
#define asn1SccArray3D_REQUIRED_BYTES_FOR_ACN_ENCODING   66355224 
#define asn1SccArray3D_REQUIRED_BITS_FOR_ACN_ENCODING    530841789
#define asn1SccArray3D_REQUIRED_BYTES_FOR_XER_ENCODING   132710657

void asn1SccArray3D_Initialize(asn1SccArray3D* pVal);
flag asn1SccArray3D_IsConstraintValid(const asn1SccArray3D* val, int* pErrCode);


extern const asn1SccT_UInt32 array3D_Version;
extern const asn1SccT_UInt32 array3DMaxBytes;
extern const asn1SccT_UInt32 array3DMaxRows;
extern const asn1SccT_UInt32 array3DMaxCols;
extern const asn1SccT_UInt32 array3DMaxChannels; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccArray3D_depth_t_Encode(const asn1SccArray3D_depth_t* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_depth_t_Decode(asn1SccArray3D_depth_t* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArray3D_depth_t_ACN_Encode(const asn1SccArray3D_depth_t* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_depth_t_ACN_Decode(asn1SccArray3D_depth_t* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArray3D_data_Encode(const asn1SccArray3D_data* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_data_Decode(asn1SccArray3D_data* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArray3D_data_ACN_Encode(const asn1SccArray3D_data* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_data_ACN_Decode(asn1SccArray3D_data* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArray3D_Encode(const asn1SccArray3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_Decode(asn1SccArray3D* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccArray3D_ACN_Encode(const asn1SccArray3D* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccArray3D_ACN_Decode(asn1SccArray3D* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}
#define ENUM_asn1Sccdepth_8U	asn1Sccdepth_8U
#define ENUM_asn1Sccdepth_8S	asn1Sccdepth_8S
#define ENUM_asn1Sccdepth_16U	asn1Sccdepth_16U
#define ENUM_asn1Sccdepth_16S	asn1Sccdepth_16S
#define ENUM_asn1Sccdepth_32S	asn1Sccdepth_32S
#define ENUM_asn1Sccdepth_32F	asn1Sccdepth_32F
#define ENUM_asn1Sccdepth_64F	asn1Sccdepth_64F

#endif

#endif