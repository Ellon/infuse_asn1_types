/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "DistanceImage.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccDistanceImage_data_Initialize(asn1SccDistanceImage_data* pVal)
{
    *pVal = (asn1SccDistanceImage_data) {    .nCount = 1,    .arr = 
    {
        0.00000000000000000000E+000        
    }
};
}
#endif

 
flag asn1SccDistanceImage_data_IsConstraintValid(const asn1SccDistanceImage_data* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = (1 <= pVal->nCount && pVal->nCount <= maxDistanceImageSize);
	*pErrCode = ret ? 0 : ERR_asn1SccDistanceImage_data;
	i1 = 0;
	while (ret && (i1< pVal->nCount)) {
	    ret = asn1SccT_Float_IsConstraintValid(&pVal->arr[i1], pErrCode);
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccDistanceImage_data_Encode(const asn1SccDistanceImage_data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccDistanceImage_data_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 60);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccDistanceImage_data_Decode(asn1SccDistanceImage_data* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	asn1SccSint nCount;
	int i1=0;

	ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 60);
	*pErrCode = ret ? 0 : 276299777;
	pVal->nCount = (long)nCount;
		
	for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	{
		ret = asn1SccT_Float_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
	}

	return ret;
}

flag asn1SccDistanceImage_data_ACN_Encode(const asn1SccDistanceImage_data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccDistanceImage_data_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    BitStream_EncodeConstraintWholeNumber(pBitStrm, pVal->nCount, 1, 60);
	    	
	    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
	    {
	    	ret = asn1SccT_Float_ACN_Encode(&pVal->arr[i1], pBitStrm, pErrCode, FALSE);
	    }
    }

	return ret;
}

flag asn1SccDistanceImage_data_ACN_Decode(asn1SccDistanceImage_data* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    asn1SccSint nCount;
    ret = BitStream_DecodeConstraintWholeNumber(pBitStrm, &nCount, 1, 60);
    *pErrCode = ret ? 0 : 276299778;
    pVal->nCount = (long)nCount;
    	
    for(i1=0; (i1 < pVal->nCount) && ret; i1++) 
    {
    	ret = asn1SccT_Float_ACN_Decode(&pVal->arr[i1], pBitStrm, pErrCode);
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccDistanceImage_Initialize(asn1SccDistanceImage* pVal)
{
    *pVal = (asn1SccDistanceImage) {
    .ref_time = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .width = 0,
    .height = 0,
    .scale_x = 0.00000000000000000000E+000,
    .scale_y = 0.00000000000000000000E+000,
    .center_x = 0.00000000000000000000E+000,
    .center_y = 0.00000000000000000000E+000,
    .data = {    .nCount = 1,    .arr = 
        {
            0.00000000000000000000E+000        
        }
    }
};
}
#endif

 
flag asn1SccDistanceImage_IsConstraintValid(const asn1SccDistanceImage* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccTime_IsConstraintValid(&pVal->ref_time, pErrCode);
	if (ret) {
	    ret = asn1SccT_UInt16_IsConstraintValid(&pVal->width, pErrCode);
	    if (ret) {
	        ret = asn1SccT_UInt16_IsConstraintValid(&pVal->height, pErrCode);
	        if (ret) {
	            ret = asn1SccT_Float_IsConstraintValid(&pVal->scale_x, pErrCode);
	            if (ret) {
	                ret = asn1SccT_Float_IsConstraintValid(&pVal->scale_y, pErrCode);
	                if (ret) {
	                    ret = asn1SccT_Float_IsConstraintValid(&pVal->center_x, pErrCode);
	                    if (ret) {
	                        ret = asn1SccT_Float_IsConstraintValid(&pVal->center_y, pErrCode);
	                        if (ret) {
	                            ret = asn1SccDistanceImage_data_IsConstraintValid(&pVal->data, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}

	return ret;
}

flag asn1SccDistanceImage_Encode(const asn1SccDistanceImage* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccDistanceImage_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode width */
	        ret = asn1SccT_UInt16_Encode(&pVal->width, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode height */
	            ret = asn1SccT_UInt16_Encode(&pVal->height, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode scale_x */
	                ret = asn1SccT_Float_Encode(&pVal->scale_x, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode scale_y */
	                    ret = asn1SccT_Float_Encode(&pVal->scale_y, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode center_x */
	                        ret = asn1SccT_Float_Encode(&pVal->center_x, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode center_y */
	                            ret = asn1SccT_Float_Encode(&pVal->center_y, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode data */
	                                ret = asn1SccDistanceImage_data_Encode(&pVal->data, pBitStrm, pErrCode, FALSE);
	                            
	                            }
	                        }
	                    }
	                }
	            }
	        }
	    }
    }

	return ret;
}

flag asn1SccDistanceImage_Decode(asn1SccDistanceImage* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode ref_time */
	ret = asn1SccTime_Decode(&pVal->ref_time, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode width */
	    ret = asn1SccT_UInt16_Decode(&pVal->width, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode height */
	        ret = asn1SccT_UInt16_Decode(&pVal->height, pBitStrm, pErrCode);
	        if (ret) {
	            /*Decode scale_x */
	            ret = asn1SccT_Float_Decode(&pVal->scale_x, pBitStrm, pErrCode);
	            if (ret) {
	                /*Decode scale_y */
	                ret = asn1SccT_Float_Decode(&pVal->scale_y, pBitStrm, pErrCode);
	                if (ret) {
	                    /*Decode center_x */
	                    ret = asn1SccT_Float_Decode(&pVal->center_x, pBitStrm, pErrCode);
	                    if (ret) {
	                        /*Decode center_y */
	                        ret = asn1SccT_Float_Decode(&pVal->center_y, pBitStrm, pErrCode);
	                        if (ret) {
	                            /*Decode data */
	                            ret = asn1SccDistanceImage_data_Decode(&pVal->data, pBitStrm, pErrCode);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
	}


	return ret;
}

flag asn1SccDistanceImage_ACN_Encode(const asn1SccDistanceImage* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccDistanceImage_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode ref_time */
	    ret = asn1SccTime_ACN_Encode(&pVal->ref_time, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode width */
	        ret = asn1SccT_UInt16_ACN_Encode(&pVal->width, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode height */
	            ret = asn1SccT_UInt16_ACN_Encode(&pVal->height, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode scale_x */
	                ret = asn1SccT_Float_ACN_Encode(&pVal->scale_x, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode scale_y */
	                    ret = asn1SccT_Float_ACN_Encode(&pVal->scale_y, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode center_x */
	                        ret = asn1SccT_Float_ACN_Encode(&pVal->center_x, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode center_y */
	                            ret = asn1SccT_Float_ACN_Encode(&pVal->center_y, pBitStrm, pErrCode, FALSE);
	                            if (ret) {
	                                /*Encode data */
	                                ret = asn1SccDistanceImage_data_ACN_Encode(&pVal->data, pBitStrm, pErrCode, FALSE);

	                            }

	                        }

	                    }

	                }

	            }

	        }

	    }

    }

	return ret;
}

flag asn1SccDistanceImage_ACN_Decode(asn1SccDistanceImage* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode ref_time */
    ret = asn1SccTime_ACN_Decode(&pVal->ref_time, pBitStrm, pErrCode);
    if (ret) {
        /*Decode width */
        ret = asn1SccT_UInt16_ACN_Decode(&pVal->width, pBitStrm, pErrCode);
        if (ret) {
            /*Decode height */
            ret = asn1SccT_UInt16_ACN_Decode(&pVal->height, pBitStrm, pErrCode);
            if (ret) {
                /*Decode scale_x */
                ret = asn1SccT_Float_ACN_Decode(&pVal->scale_x, pBitStrm, pErrCode);
                if (ret) {
                    /*Decode scale_y */
                    ret = asn1SccT_Float_ACN_Decode(&pVal->scale_y, pBitStrm, pErrCode);
                    if (ret) {
                        /*Decode center_x */
                        ret = asn1SccT_Float_ACN_Decode(&pVal->center_x, pBitStrm, pErrCode);
                        if (ret) {
                            /*Decode center_y */
                            ret = asn1SccT_Float_ACN_Decode(&pVal->center_y, pBitStrm, pErrCode);
                            if (ret) {
                                /*Decode data */
                                ret = asn1SccDistanceImage_data_ACN_Decode(&pVal->data, pBitStrm, pErrCode);

                            }

                        }

                    }

                }

            }

        }

    }


    return ret;
}

const asn1SccT_UInt32 maxDistanceImageSize = 60;