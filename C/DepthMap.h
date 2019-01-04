#ifndef GENERATED_ASN1SCC_DEPTHMAP_H
#define GENERATED_ASN1SCC_DEPTHMAP_H
/*
Code automatically generated by asn1scc tool
*/
#include "taste-extended.h"
#include "taste-types.h"
#include "Time.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {    int nCount; 
    
    asn1SccT_Double arr[30000];
} asn1SccDepthMap_horizontal_interval;

#define asn1SccDepthMap_horizontal_interval_REQUIRED_BYTES_FOR_ENCODING       390002 
#define asn1SccDepthMap_horizontal_interval_REQUIRED_BITS_FOR_ENCODING        3120015
#define asn1SccDepthMap_horizontal_interval_REQUIRED_BYTES_FOR_ACN_ENCODING   390002 
#define asn1SccDepthMap_horizontal_interval_REQUIRED_BITS_FOR_ACN_ENCODING    3120015
#define asn1SccDepthMap_horizontal_interval_REQUIRED_BYTES_FOR_XER_ENCODING   2130061

void asn1SccDepthMap_horizontal_interval_Initialize(asn1SccDepthMap_horizontal_interval* pVal);
flag asn1SccDepthMap_horizontal_interval_IsConstraintValid(const asn1SccDepthMap_horizontal_interval* val, int* pErrCode);
#ifndef ERR_asn1SccDepthMap_horizontal_interval 
#define ERR_asn1SccDepthMap_horizontal_interval		1001  /*(SIZE(1 .. maxDepthMapSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccT_Double arr[30000];
} asn1SccDepthMap_vertical_interval;

#define asn1SccDepthMap_vertical_interval_REQUIRED_BYTES_FOR_ENCODING       390002 
#define asn1SccDepthMap_vertical_interval_REQUIRED_BITS_FOR_ENCODING        3120015
#define asn1SccDepthMap_vertical_interval_REQUIRED_BYTES_FOR_ACN_ENCODING   390002 
#define asn1SccDepthMap_vertical_interval_REQUIRED_BITS_FOR_ACN_ENCODING    3120015
#define asn1SccDepthMap_vertical_interval_REQUIRED_BYTES_FOR_XER_ENCODING   2130057

void asn1SccDepthMap_vertical_interval_Initialize(asn1SccDepthMap_vertical_interval* pVal);
flag asn1SccDepthMap_vertical_interval_IsConstraintValid(const asn1SccDepthMap_vertical_interval* val, int* pErrCode);
#ifndef ERR_asn1SccDepthMap_vertical_interval 
#define ERR_asn1SccDepthMap_vertical_interval		1002  /*(SIZE(1 .. maxDepthMapSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccT_Float arr[30000];
} asn1SccDepthMap_remissions;

#define asn1SccDepthMap_remissions_REQUIRED_BYTES_FOR_ENCODING       390002 
#define asn1SccDepthMap_remissions_REQUIRED_BITS_FOR_ENCODING        3120015
#define asn1SccDepthMap_remissions_REQUIRED_BYTES_FOR_ACN_ENCODING   390002 
#define asn1SccDepthMap_remissions_REQUIRED_BITS_FOR_ACN_ENCODING    3120015
#define asn1SccDepthMap_remissions_REQUIRED_BYTES_FOR_XER_ENCODING   2070043

void asn1SccDepthMap_remissions_Initialize(asn1SccDepthMap_remissions* pVal);
flag asn1SccDepthMap_remissions_IsConstraintValid(const asn1SccDepthMap_remissions* val, int* pErrCode);
#ifndef ERR_asn1SccDepthMap_remissions 
#define ERR_asn1SccDepthMap_remissions		1003  /*(SIZE(1 .. maxDepthMapSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccT_Float arr[30000];
} asn1SccDepthMap_distances;

#define asn1SccDepthMap_distances_REQUIRED_BYTES_FOR_ENCODING       390002 
#define asn1SccDepthMap_distances_REQUIRED_BITS_FOR_ENCODING        3120015
#define asn1SccDepthMap_distances_REQUIRED_BYTES_FOR_ACN_ENCODING   390002 
#define asn1SccDepthMap_distances_REQUIRED_BITS_FOR_ACN_ENCODING    3120015
#define asn1SccDepthMap_distances_REQUIRED_BYTES_FOR_XER_ENCODING   2070041

void asn1SccDepthMap_distances_Initialize(asn1SccDepthMap_distances* pVal);
flag asn1SccDepthMap_distances_IsConstraintValid(const asn1SccDepthMap_distances* val, int* pErrCode);
#ifndef ERR_asn1SccDepthMap_distances 
#define ERR_asn1SccDepthMap_distances		1004  /*(SIZE(1 .. maxDepthMapSize))*/
#endif

typedef struct {    int nCount; 
    
    asn1SccTime arr[30000];
} asn1SccDepthMap_timestamps;

#define asn1SccDepthMap_timestamps_REQUIRED_BYTES_FOR_ENCODING       360002 
#define asn1SccDepthMap_timestamps_REQUIRED_BITS_FOR_ENCODING        2880015
#define asn1SccDepthMap_timestamps_REQUIRED_BYTES_FOR_ACN_ENCODING   360002 
#define asn1SccDepthMap_timestamps_REQUIRED_BITS_FOR_ACN_ENCODING    2880015
#define asn1SccDepthMap_timestamps_REQUIRED_BYTES_FOR_XER_ENCODING   3210043

void asn1SccDepthMap_timestamps_Initialize(asn1SccDepthMap_timestamps* pVal);
flag asn1SccDepthMap_timestamps_IsConstraintValid(const asn1SccDepthMap_timestamps* val, int* pErrCode);
#ifndef ERR_asn1SccDepthMap_timestamps 
#define ERR_asn1SccDepthMap_timestamps		1005  /*(SIZE(1 .. maxDepthMapSize))*/
#endif

typedef enum {
    asn1Sccunit_x = 0,
    asn1Sccunit_y = 1,
    asn1Sccunit_z = 2
} asn1SccUNIT_AXIS;

#define asn1SccUNIT_AXIS_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccUNIT_AXIS_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccUNIT_AXIS_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccUNIT_AXIS_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccUNIT_AXIS_REQUIRED_BYTES_FOR_XER_ENCODING   38

void asn1SccUNIT_AXIS_Initialize(asn1SccUNIT_AXIS* pVal);
flag asn1SccUNIT_AXIS_IsConstraintValid(const asn1SccUNIT_AXIS* val, int* pErrCode);
#ifndef ERR_asn1SccUNIT_AXIS_unknown_enumeration_value 
#define ERR_asn1SccUNIT_AXIS_unknown_enumeration_value		1007  /**/
#endif
#ifndef ERR_asn1SccUNIT_AXIS 
#define ERR_asn1SccUNIT_AXIS		1006  /**/
#endif

typedef enum {
    asn1Sccvalid_measurement = 0,
    asn1SccDEPTH_MEASUREMENT_STATE_too_far = 1,
    asn1SccDEPTH_MEASUREMENT_STATE_too_near = 2,
    asn1SccDEPTH_MEASUREMENT_STATE_measurement_error = 3
} asn1SccDEPTH_MEASUREMENT_STATE;

#define asn1SccDEPTH_MEASUREMENT_STATE_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccDEPTH_MEASUREMENT_STATE_REQUIRED_BITS_FOR_ENCODING        2
#define asn1SccDEPTH_MEASUREMENT_STATE_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccDEPTH_MEASUREMENT_STATE_REQUIRED_BITS_FOR_ACN_ENCODING    2
#define asn1SccDEPTH_MEASUREMENT_STATE_REQUIRED_BYTES_FOR_XER_ENCODING   88

void asn1SccDEPTH_MEASUREMENT_STATE_Initialize(asn1SccDEPTH_MEASUREMENT_STATE* pVal);
flag asn1SccDEPTH_MEASUREMENT_STATE_IsConstraintValid(const asn1SccDEPTH_MEASUREMENT_STATE* val, int* pErrCode);
#ifndef ERR_asn1SccDEPTH_MEASUREMENT_STATE_unknown_enumeration_value 
#define ERR_asn1SccDEPTH_MEASUREMENT_STATE_unknown_enumeration_value		1009  /**/
#endif
#ifndef ERR_asn1SccDEPTH_MEASUREMENT_STATE 
#define ERR_asn1SccDEPTH_MEASUREMENT_STATE		1008  /**/
#endif

typedef enum {
    asn1Sccpolar = 0,
    asn1Sccplanar = 1
} asn1SccPROJECTION_TYPE;

#define asn1SccPROJECTION_TYPE_REQUIRED_BYTES_FOR_ENCODING       1 
#define asn1SccPROJECTION_TYPE_REQUIRED_BITS_FOR_ENCODING        1
#define asn1SccPROJECTION_TYPE_REQUIRED_BYTES_FOR_ACN_ENCODING   1 
#define asn1SccPROJECTION_TYPE_REQUIRED_BITS_FOR_ACN_ENCODING    1
#define asn1SccPROJECTION_TYPE_REQUIRED_BYTES_FOR_XER_ENCODING   48

void asn1SccPROJECTION_TYPE_Initialize(asn1SccPROJECTION_TYPE* pVal);
flag asn1SccPROJECTION_TYPE_IsConstraintValid(const asn1SccPROJECTION_TYPE* val, int* pErrCode);
#ifndef ERR_asn1SccPROJECTION_TYPE_unknown_enumeration_value 
#define ERR_asn1SccPROJECTION_TYPE_unknown_enumeration_value		1011  /**/
#endif
#ifndef ERR_asn1SccPROJECTION_TYPE 
#define ERR_asn1SccPROJECTION_TYPE		1010  /**/
#endif

typedef struct {
    asn1SccTime ref_time;
    asn1SccDepthMap_timestamps timestamps;
    asn1SccPROJECTION_TYPE vertical_projection;
    asn1SccPROJECTION_TYPE horizontal_projection;
    asn1SccDepthMap_vertical_interval vertical_interval;
    asn1SccDepthMap_horizontal_interval horizontal_interval;
    asn1SccT_UInt32 vertical_size;
    asn1SccT_UInt32 horizontal_size;
    asn1SccDepthMap_distances distances;
    asn1SccDepthMap_remissions remissions;
} asn1SccDepthMap;

#define asn1SccDepthMap_REQUIRED_BYTES_FOR_ENCODING       1920030 
#define asn1SccDepthMap_REQUIRED_BITS_FOR_ENCODING        15360237
#define asn1SccDepthMap_REQUIRED_BYTES_FOR_ACN_ENCODING   1920030 
#define asn1SccDepthMap_REQUIRED_BITS_FOR_ACN_ENCODING    15360237
#define asn1SccDepthMap_REQUIRED_BYTES_FOR_XER_ENCODING   11610513

void asn1SccDepthMap_Initialize(asn1SccDepthMap* pVal);
flag asn1SccDepthMap_IsConstraintValid(const asn1SccDepthMap* val, int* pErrCode);


extern const asn1SccT_UInt32 maxDepthMapSize; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

flag asn1SccDepthMap_horizontal_interval_Encode(const asn1SccDepthMap_horizontal_interval* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_horizontal_interval_Decode(asn1SccDepthMap_horizontal_interval* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_horizontal_interval_ACN_Encode(const asn1SccDepthMap_horizontal_interval* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_horizontal_interval_ACN_Decode(asn1SccDepthMap_horizontal_interval* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_vertical_interval_Encode(const asn1SccDepthMap_vertical_interval* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_vertical_interval_Decode(asn1SccDepthMap_vertical_interval* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_vertical_interval_ACN_Encode(const asn1SccDepthMap_vertical_interval* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_vertical_interval_ACN_Decode(asn1SccDepthMap_vertical_interval* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_remissions_Encode(const asn1SccDepthMap_remissions* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_remissions_Decode(asn1SccDepthMap_remissions* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_remissions_ACN_Encode(const asn1SccDepthMap_remissions* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_remissions_ACN_Decode(asn1SccDepthMap_remissions* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_distances_Encode(const asn1SccDepthMap_distances* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_distances_Decode(asn1SccDepthMap_distances* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_distances_ACN_Encode(const asn1SccDepthMap_distances* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_distances_ACN_Decode(asn1SccDepthMap_distances* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_timestamps_Encode(const asn1SccDepthMap_timestamps* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_timestamps_Decode(asn1SccDepthMap_timestamps* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_timestamps_ACN_Encode(const asn1SccDepthMap_timestamps* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_timestamps_ACN_Decode(asn1SccDepthMap_timestamps* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccUNIT_AXIS_Encode(const asn1SccUNIT_AXIS* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccUNIT_AXIS_Decode(asn1SccUNIT_AXIS* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccUNIT_AXIS_ACN_Encode(const asn1SccUNIT_AXIS* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccUNIT_AXIS_ACN_Decode(asn1SccUNIT_AXIS* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDEPTH_MEASUREMENT_STATE_Encode(const asn1SccDEPTH_MEASUREMENT_STATE* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDEPTH_MEASUREMENT_STATE_Decode(asn1SccDEPTH_MEASUREMENT_STATE* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDEPTH_MEASUREMENT_STATE_ACN_Encode(const asn1SccDEPTH_MEASUREMENT_STATE* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDEPTH_MEASUREMENT_STATE_ACN_Decode(asn1SccDEPTH_MEASUREMENT_STATE* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPROJECTION_TYPE_Encode(const asn1SccPROJECTION_TYPE* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPROJECTION_TYPE_Decode(asn1SccPROJECTION_TYPE* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccPROJECTION_TYPE_ACN_Encode(const asn1SccPROJECTION_TYPE* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccPROJECTION_TYPE_ACN_Decode(asn1SccPROJECTION_TYPE* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_Encode(const asn1SccDepthMap* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_Decode(asn1SccDepthMap* pVal, BitStream* pBitStrm, int* pErrCode);
flag asn1SccDepthMap_ACN_Encode(const asn1SccDepthMap* val, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints);
flag asn1SccDepthMap_ACN_Decode(asn1SccDepthMap* pVal, BitStream* pBitStrm, int* pErrCode); 


#ifdef  __cplusplus
}
#define ENUM_asn1Sccunit_x	asn1Sccunit_x
#define ENUM_asn1Sccunit_y	asn1Sccunit_y
#define ENUM_asn1Sccunit_z	asn1Sccunit_z
#define ENUM_asn1Sccvalid_measurement	asn1Sccvalid_measurement
#define ENUM_asn1SccDEPTH_MEASUREMENT_STATE_too_far	asn1SccDEPTH_MEASUREMENT_STATE_too_far
#define ENUM_asn1SccDEPTH_MEASUREMENT_STATE_too_near	asn1SccDEPTH_MEASUREMENT_STATE_too_near
#define ENUM_asn1SccDEPTH_MEASUREMENT_STATE_measurement_error	asn1SccDEPTH_MEASUREMENT_STATE_measurement_error
#define ENUM_asn1Sccpolar	asn1Sccpolar
#define ENUM_asn1Sccplanar	asn1Sccplanar

#endif

#endif