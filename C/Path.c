/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Path.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPath_waypoints_Initialize(asn1SccPath_waypoints* pVal)
{
    *pVal = (asn1SccPath_waypoints) {    .nCount = 0,    .arr = 
    {
        
    }
};
}
#endif

 
flag asn1SccPath_waypoints_IsConstraintValid(const asn1SccPath_waypoints* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (0 <= pVal->nCount && pVal->nCount <= pathMaxSize);
	*pErrCode = ret ? 0 : ERR_asn1SccPath_waypoints;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccTransformWithCovariance_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccPath_waypoints_Encode(const asn1SccPath_waypoints* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccPath_waypoints_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 100);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccTransformWithCovariance_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccPath_waypoints_Decode(asn1SccPath_waypoints* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 100);
	*pErrCode = ret ? 0 : 279969793;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccTransformWithCovariance_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccPath_waypoints_ACN_Encode(const asn1SccPath_waypoints* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccPath_waypoints_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 0, 100);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccTransformWithCovariance_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccPath_waypoints_ACN_Decode(asn1SccPath_waypoints* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 0, 100);
    *pErrCode = ret ? 0 : 279969794;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccTransformWithCovariance_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPath_Initialize(asn1SccPath* pVal)
{
    *pVal = (asn1SccPath) {
    .msgVersion = 0,
    .timeStamp = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .waypoints = {    .nCount = 0,    .arr = 
        {
            
        }
    }
};
}
#endif

 
flag asn1SccPath_IsConstraintValid(const asn1SccPath* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_UInt32_IsConstraintValid(&pVal->msgVersion, pErrCode);
	if (ret) {
	    ret = asn1SccTime_IsConstraintValid(&pVal->timeStamp, pErrCode);
	    if (ret) {
	        ret = asn1SccPath_waypoints_IsConstraintValid(&pVal->waypoints, pErrCode);
	    
	    }
	}

	return ret;
}

flag asn1SccPath_Encode(const asn1SccPath* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPath_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode timeStamp */
	        ret = asn1SccTime_Encode(&pVal->timeStamp, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode waypoints */
	            ret = asn1SccPath_waypoints_Encode(&pVal->waypoints, pBitStrm, pErrCode, FALSE);
	        
	        }
	    }
    }

	return ret;
}

flag asn1SccPath_Decode(asn1SccPath* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode msgVersion */
	ret = asn1SccT_UInt32_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode timeStamp */
	    ret = asn1SccTime_Decode(&pVal->timeStamp, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode waypoints */
	        ret = asn1SccPath_waypoints_Decode(&pVal->waypoints, pBitStrm, pErrCode);
	    
	    }
	}


	return ret;
}

flag asn1SccPath_ACN_Encode(const asn1SccPath* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPath_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_ACN_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode timeStamp */
	        ret = asn1SccTime_ACN_Encode(&pVal->timeStamp, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode waypoints */
	            ret = asn1SccPath_waypoints_ACN_Encode(&pVal->waypoints, pBitStrm, pErrCode, FALSE);

	        }

	    }

    }

	return ret;
}

flag asn1SccPath_ACN_Decode(asn1SccPath* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode msgVersion */
    ret = asn1SccT_UInt32_ACN_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
    if (ret) {
        /*Decode timeStamp */
        ret = asn1SccTime_ACN_Decode(&pVal->timeStamp, pBitStrm, pErrCode);
        if (ret) {
            /*Decode waypoints */
            ret = asn1SccPath_waypoints_ACN_Decode(&pVal->waypoints, pBitStrm, pErrCode);

        }

    }


    return ret;
}

const asn1SccT_UInt32 pathMaxSize = 100;
