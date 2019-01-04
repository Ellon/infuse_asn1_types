/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Covariance.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccCovariance_Initialize(asn1SccCovariance* pVal)
{
    *pVal = (asn1SccCovariance) {    .arr = 
    {
        {    .arr = 
            {
                0.00000000000000000000E+000        
            }
        }        
    }
};
}
#endif

 
flag asn1SccCovariance_IsConstraintValid(const asn1SccCovariance* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccMatrix6d_IsConstraintValid(pVal, pErrCode);

	return ret;
}

flag asn1SccCovariance_Encode(const asn1SccCovariance* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccCovariance_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccMatrix6d_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccCovariance_Decode(asn1SccCovariance* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = asn1SccMatrix6d_Decode(pVal, pBitStrm, pErrCode);

	return ret;
}

flag asn1SccCovariance_ACN_Encode(const asn1SccCovariance* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccCovariance_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccMatrix6d_ACN_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccCovariance_ACN_Decode(asn1SccCovariance* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccMatrix6d_ACN_Decode(pVal, pBitStrm, pErrCode);
    return ret;
}
