/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Twist_InFuse.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTwist_InFuse_Initialize(asn1SccTwist_InFuse* pVal)
{
    *pVal = (asn1SccTwist_InFuse) {
    .msgVersion = 0,
    .timeStamp = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .twist = {
        .metadata = {
            .msgVersion = 0,
            .timeStamp = {
                .microseconds = -9223372036854775807LL,
                .usecPerSec = -2147483648LL
            }
        },
        .data = {
            .vel = {    .arr = 
                {
                    0.00000000000000000000E+000        
                }
            },
            .rot = {    .arr = 
                {
                    0.00000000000000000000E+000        
                }
            },
            .cov = {    .arr = 
                {
                    {    .arr = 
                        {
                            0.00000000000000000000E+000        
                        }
                    }        
                }
            }
        }
    }
};
}
#endif

 
flag asn1SccTwist_InFuse_IsConstraintValid(const asn1SccTwist_InFuse* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_UInt32_IsConstraintValid(&pVal->msgVersion, pErrCode);
	if (ret) {
	    ret = asn1SccTime_IsConstraintValid(&pVal->timeStamp, pErrCode);
	    if (ret) {
	        ret = asn1SccTwistWithCovariance_IsConstraintValid(&pVal->twist, pErrCode);
	    
	    }
	}

	return ret;
}

flag asn1SccTwist_InFuse_Encode(const asn1SccTwist_InFuse* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTwist_InFuse_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode timeStamp */
	        ret = asn1SccTime_Encode(&pVal->timeStamp, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode twist */
	            ret = asn1SccTwistWithCovariance_Encode(&pVal->twist, pBitStrm, pErrCode, FALSE);
	        
	        }
	    }
    }

	return ret;
}

flag asn1SccTwist_InFuse_Decode(asn1SccTwist_InFuse* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode msgVersion */
	ret = asn1SccT_UInt32_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode timeStamp */
	    ret = asn1SccTime_Decode(&pVal->timeStamp, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode twist */
	        ret = asn1SccTwistWithCovariance_Decode(&pVal->twist, pBitStrm, pErrCode);
	    
	    }
	}


	return ret;
}

flag asn1SccTwist_InFuse_ACN_Encode(const asn1SccTwist_InFuse* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTwist_InFuse_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_ACN_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode timeStamp */
	        ret = asn1SccTime_ACN_Encode(&pVal->timeStamp, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode twist */
	            ret = asn1SccTwistWithCovariance_ACN_Encode(&pVal->twist, pBitStrm, pErrCode, FALSE);

	        }

	    }

    }

	return ret;
}

flag asn1SccTwist_InFuse_ACN_Decode(asn1SccTwist_InFuse* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode msgVersion */
    ret = asn1SccT_UInt32_ACN_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
    if (ret) {
        /*Decode timeStamp */
        ret = asn1SccTime_ACN_Decode(&pVal->timeStamp, pBitStrm, pErrCode);
        if (ret) {
            /*Decode twist */
            ret = asn1SccTwistWithCovariance_ACN_Decode(&pVal->twist, pBitStrm, pErrCode);

        }

    }


    return ret;
}

const asn1SccT_UInt32 twist_InFuse_Version = 0;
