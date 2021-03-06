/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "TransformWithCovariance.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTransformWithCovariance_Data_Initialize(asn1SccTransformWithCovariance_Data* pVal)
{
    *pVal = (asn1SccTransformWithCovariance_Data) {
    .translation = {    .arr = 
        {
            0.00000000000000000000E+000        
        }
    },
    .orientation = {    .arr = 
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
};
}
#endif

 
flag asn1SccTransformWithCovariance_Data_IsConstraintValid(const asn1SccTransformWithCovariance_Data* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccPosition_IsConstraintValid(&pVal->translation, pErrCode);
	if (ret) {
	    ret = asn1SccQuaterniond_IsConstraintValid(&pVal->orientation, pErrCode);
	    if (ret) {
	        ret = asn1SccCovariance_IsConstraintValid(&pVal->cov, pErrCode);
	    
	    }
	}

	return ret;
}

flag asn1SccTransformWithCovariance_Data_Encode(const asn1SccTransformWithCovariance_Data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTransformWithCovariance_Data_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode translation */
	    ret = asn1SccPosition_Encode(&pVal->translation, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orientation */
	        ret = asn1SccQuaterniond_Encode(&pVal->orientation, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode cov */
	            ret = asn1SccCovariance_Encode(&pVal->cov, pBitStrm, pErrCode, FALSE);
	        
	        }
	    }
    }

	return ret;
}

flag asn1SccTransformWithCovariance_Data_Decode(asn1SccTransformWithCovariance_Data* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode translation */
	ret = asn1SccPosition_Decode(&pVal->translation, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode orientation */
	    ret = asn1SccQuaterniond_Decode(&pVal->orientation, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode cov */
	        ret = asn1SccCovariance_Decode(&pVal->cov, pBitStrm, pErrCode);
	    
	    }
	}


	return ret;
}

flag asn1SccTransformWithCovariance_Data_ACN_Encode(const asn1SccTransformWithCovariance_Data* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTransformWithCovariance_Data_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode translation */
	    ret = asn1SccPosition_ACN_Encode(&pVal->translation, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orientation */
	        ret = asn1SccQuaterniond_ACN_Encode(&pVal->orientation, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode cov */
	            ret = asn1SccCovariance_ACN_Encode(&pVal->cov, pBitStrm, pErrCode, FALSE);

	        }

	    }

    }

	return ret;
}

flag asn1SccTransformWithCovariance_Data_ACN_Decode(asn1SccTransformWithCovariance_Data* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode translation */
    ret = asn1SccPosition_ACN_Decode(&pVal->translation, pBitStrm, pErrCode);
    if (ret) {
        /*Decode orientation */
        ret = asn1SccQuaterniond_ACN_Decode(&pVal->orientation, pBitStrm, pErrCode);
        if (ret) {
            /*Decode cov */
            ret = asn1SccCovariance_ACN_Decode(&pVal->cov, pBitStrm, pErrCode);

        }

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTransformWithCovariance_Metadata_dataEstimated_Initialize(asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal)
{
    *pVal = (asn1SccTransformWithCovariance_Metadata_dataEstimated) {    .arr = 
    {
        FALSE        
    }
};
}
#endif

 
flag asn1SccTransformWithCovariance_Metadata_dataEstimated_IsConstraintValid(const asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	int i1=0;
	*pErrCode=0;

	(void)pVal;

	ret = TRUE; *pErrCode = 0;
	i1 = 0;
	while (ret && (i1< 7)) {
	    ret = TRUE; *pErrCode = 0;
	    i1 = i1+1;
	}

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_dataEstimated_Encode(const asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
	int i1=0;
    
	ret = bCheckConstraints ? asn1SccTransformWithCovariance_Metadata_dataEstimated_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < 7) && ret; i1++) 
	    {
	    	BitStream_AppendBit(pBitStrm,pVal->arr[i1]);
	    }
    }

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_dataEstimated_Decode(asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
	int i1=0;

		
	for(i1=0; (i1 < 7) && ret; i1++) 
	{
		ret = BitStream_ReadBit(pBitStrm, &pVal->arr[i1]);
		*pErrCode = ret ? 0 : 271581185;
	}

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_dataEstimated_ACN_Encode(const asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    int i1=0;

    ret = bCheckConstraints ? asn1SccTransformWithCovariance_Metadata_dataEstimated_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    	
	    for(i1=0; (i1 < 7) && ret; i1++) 
	    {
	    	{
	    		static byte true_data[] = {0x80};
	    		static byte false_data[] = {0x7F};
	    	    byte* tmp = pVal->arr[i1] ? true_data : false_data; 
	    	    BitStream_AppendBits(pBitStrm, tmp, 1);
	    	}
	    }
    }

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_dataEstimated_ACN_Decode(asn1SccTransformWithCovariance_Metadata_dataEstimated* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    int i1=0;
    	
    for(i1=0; (i1 < 7) && ret; i1++) 
    {
    	{
    		static byte tmp[] = {0x80};
    		ret = BitStream_ReadBitPattern(pBitStrm, tmp, 1, &pVal->arr[i1]);
    	    *pErrCode = ret ? 0 : 271581186;
    	}
    }
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTransformWithCovariance_Metadata_Initialize(asn1SccTransformWithCovariance_Metadata* pVal)
{
    *pVal = (asn1SccTransformWithCovariance_Metadata) {
    .msgVersion = 0,
    .producerId = {0,
        {
        }
    },
    .dataEstimated = {    .arr = 
        {
            FALSE        
        }
    },
    .parentFrameId = {0,
        {
        }
    },
    .parentTime = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    },
    .childFrameId = {0,
        {
        }
    },
    .childTime = {
        .microseconds = -9223372036854775807LL,
        .usecPerSec = -2147483648LL
    }
};
}
#endif

 
flag asn1SccTransformWithCovariance_Metadata_IsConstraintValid(const asn1SccTransformWithCovariance_Metadata* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_UInt32_IsConstraintValid(&pVal->msgVersion, pErrCode);
	if (ret) {
	    ret = asn1SccT_String_IsConstraintValid(&pVal->producerId, pErrCode);
	    if (ret) {
	        ret = asn1SccTransformWithCovariance_Metadata_dataEstimated_IsConstraintValid(&pVal->dataEstimated, pErrCode);
	        if (ret) {
	            ret = asn1SccT_String_IsConstraintValid(&pVal->parentFrameId, pErrCode);
	            if (ret) {
	                ret = asn1SccTime_IsConstraintValid(&pVal->parentTime, pErrCode);
	                if (ret) {
	                    ret = asn1SccT_String_IsConstraintValid(&pVal->childFrameId, pErrCode);
	                    if (ret) {
	                        ret = asn1SccTime_IsConstraintValid(&pVal->childTime, pErrCode);
	                    
	                    }
	                }
	            }
	        }
	    }
	}

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_Encode(const asn1SccTransformWithCovariance_Metadata* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTransformWithCovariance_Metadata_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode producerId */
	        ret = asn1SccT_String_Encode(&pVal->producerId, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode dataEstimated */
	            ret = asn1SccTransformWithCovariance_Metadata_dataEstimated_Encode(&pVal->dataEstimated, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode parentFrameId */
	                ret = asn1SccT_String_Encode(&pVal->parentFrameId, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode parentTime */
	                    ret = asn1SccTime_Encode(&pVal->parentTime, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode childFrameId */
	                        ret = asn1SccT_String_Encode(&pVal->childFrameId, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode childTime */
	                            ret = asn1SccTime_Encode(&pVal->childTime, pBitStrm, pErrCode, FALSE);
	                        
	                        }
	                    }
	                }
	            }
	        }
	    }
    }

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_Decode(asn1SccTransformWithCovariance_Metadata* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode msgVersion */
	ret = asn1SccT_UInt32_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode producerId */
	    ret = asn1SccT_String_Decode(&pVal->producerId, pBitStrm, pErrCode);
	    if (ret) {
	        /*Decode dataEstimated */
	        ret = asn1SccTransformWithCovariance_Metadata_dataEstimated_Decode(&pVal->dataEstimated, pBitStrm, pErrCode);
	        if (ret) {
	            /*Decode parentFrameId */
	            ret = asn1SccT_String_Decode(&pVal->parentFrameId, pBitStrm, pErrCode);
	            if (ret) {
	                /*Decode parentTime */
	                ret = asn1SccTime_Decode(&pVal->parentTime, pBitStrm, pErrCode);
	                if (ret) {
	                    /*Decode childFrameId */
	                    ret = asn1SccT_String_Decode(&pVal->childFrameId, pBitStrm, pErrCode);
	                    if (ret) {
	                        /*Decode childTime */
	                        ret = asn1SccTime_Decode(&pVal->childTime, pBitStrm, pErrCode);
	                    
	                    }
	                }
	            }
	        }
	    }
	}


	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_ACN_Encode(const asn1SccTransformWithCovariance_Metadata* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTransformWithCovariance_Metadata_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode msgVersion */
	    ret = asn1SccT_UInt32_ACN_Encode(&pVal->msgVersion, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode producerId */
	        ret = asn1SccT_String_ACN_Encode(&pVal->producerId, pBitStrm, pErrCode, FALSE);
	        if (ret) {
	            /*Encode dataEstimated */
	            ret = asn1SccTransformWithCovariance_Metadata_dataEstimated_ACN_Encode(&pVal->dataEstimated, pBitStrm, pErrCode, FALSE);
	            if (ret) {
	                /*Encode parentFrameId */
	                ret = asn1SccT_String_ACN_Encode(&pVal->parentFrameId, pBitStrm, pErrCode, FALSE);
	                if (ret) {
	                    /*Encode parentTime */
	                    ret = asn1SccTime_ACN_Encode(&pVal->parentTime, pBitStrm, pErrCode, FALSE);
	                    if (ret) {
	                        /*Encode childFrameId */
	                        ret = asn1SccT_String_ACN_Encode(&pVal->childFrameId, pBitStrm, pErrCode, FALSE);
	                        if (ret) {
	                            /*Encode childTime */
	                            ret = asn1SccTime_ACN_Encode(&pVal->childTime, pBitStrm, pErrCode, FALSE);

	                        }

	                    }

	                }

	            }

	        }

	    }

    }

	return ret;
}

flag asn1SccTransformWithCovariance_Metadata_ACN_Decode(asn1SccTransformWithCovariance_Metadata* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode msgVersion */
    ret = asn1SccT_UInt32_ACN_Decode(&pVal->msgVersion, pBitStrm, pErrCode);
    if (ret) {
        /*Decode producerId */
        ret = asn1SccT_String_ACN_Decode(&pVal->producerId, pBitStrm, pErrCode);
        if (ret) {
            /*Decode dataEstimated */
            ret = asn1SccTransformWithCovariance_Metadata_dataEstimated_ACN_Decode(&pVal->dataEstimated, pBitStrm, pErrCode);
            if (ret) {
                /*Decode parentFrameId */
                ret = asn1SccT_String_ACN_Decode(&pVal->parentFrameId, pBitStrm, pErrCode);
                if (ret) {
                    /*Decode parentTime */
                    ret = asn1SccTime_ACN_Decode(&pVal->parentTime, pBitStrm, pErrCode);
                    if (ret) {
                        /*Decode childFrameId */
                        ret = asn1SccT_String_ACN_Decode(&pVal->childFrameId, pBitStrm, pErrCode);
                        if (ret) {
                            /*Decode childTime */
                            ret = asn1SccTime_ACN_Decode(&pVal->childTime, pBitStrm, pErrCode);

                        }

                    }

                }

            }

        }

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccTransformWithCovariance_Initialize(asn1SccTransformWithCovariance* pVal)
{
    *pVal = (asn1SccTransformWithCovariance) {
    .metadata = {
        .msgVersion = 0,
        .producerId = {0,
            {
            }
        },
        .dataEstimated = {    .arr = 
            {
                FALSE        
            }
        },
        .parentFrameId = {0,
            {
            }
        },
        .parentTime = {
            .microseconds = -9223372036854775807LL,
            .usecPerSec = -2147483648LL
        },
        .childFrameId = {0,
            {
            }
        },
        .childTime = {
            .microseconds = -9223372036854775807LL,
            .usecPerSec = -2147483648LL
        }
    },
    .data = {
        .translation = {    .arr = 
            {
                0.00000000000000000000E+000        
            }
        },
        .orientation = {    .arr = 
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
};
}
#endif

 
flag asn1SccTransformWithCovariance_IsConstraintValid(const asn1SccTransformWithCovariance* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccTransformWithCovariance_Metadata_IsConstraintValid(&pVal->metadata, pErrCode);
	if (ret) {
	    ret = asn1SccTransformWithCovariance_Data_IsConstraintValid(&pVal->data, pErrCode);
	
	}

	return ret;
}

flag asn1SccTransformWithCovariance_Encode(const asn1SccTransformWithCovariance* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccTransformWithCovariance_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode metadata */
	    ret = asn1SccTransformWithCovariance_Metadata_Encode(&pVal->metadata, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode data */
	        ret = asn1SccTransformWithCovariance_Data_Encode(&pVal->data, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccTransformWithCovariance_Decode(asn1SccTransformWithCovariance* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode metadata */
	ret = asn1SccTransformWithCovariance_Metadata_Decode(&pVal->metadata, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode data */
	    ret = asn1SccTransformWithCovariance_Data_Decode(&pVal->data, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccTransformWithCovariance_ACN_Encode(const asn1SccTransformWithCovariance* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccTransformWithCovariance_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode metadata */
	    ret = asn1SccTransformWithCovariance_Metadata_ACN_Encode(&pVal->metadata, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode data */
	        ret = asn1SccTransformWithCovariance_Data_ACN_Encode(&pVal->data, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccTransformWithCovariance_ACN_Decode(asn1SccTransformWithCovariance* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode metadata */
    ret = asn1SccTransformWithCovariance_Metadata_ACN_Decode(&pVal->metadata, pBitStrm, pErrCode);
    if (ret) {
        /*Decode data */
        ret = asn1SccTransformWithCovariance_Data_ACN_Decode(&pVal->data, pBitStrm, pErrCode);

    }


    return ret;
}

const asn1SccT_UInt32 transformWithCovariance_version = 1;
