/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Pose.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPoseUpdateThreshold_Initialize(asn1SccPoseUpdateThreshold* pVal)
{
    *pVal = (asn1SccPoseUpdateThreshold) {
    .distance = 0.00000000000000000000E+000,
    .angle = 0.00000000000000000000E+000
};
}
#endif

 
flag asn1SccPoseUpdateThreshold_IsConstraintValid(const asn1SccPoseUpdateThreshold* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccT_Double_IsConstraintValid(&pVal->distance, pErrCode);
	if (ret) {
	    ret = asn1SccT_Double_IsConstraintValid(&pVal->angle, pErrCode);
	
	}

	return ret;
}

flag asn1SccPoseUpdateThreshold_Encode(const asn1SccPoseUpdateThreshold* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPoseUpdateThreshold_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode distance */
	    ret = asn1SccT_Double_Encode(&pVal->distance, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode angle */
	        ret = asn1SccT_Double_Encode(&pVal->angle, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccPoseUpdateThreshold_Decode(asn1SccPoseUpdateThreshold* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode distance */
	ret = asn1SccT_Double_Decode(&pVal->distance, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode angle */
	    ret = asn1SccT_Double_Decode(&pVal->angle, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccPoseUpdateThreshold_ACN_Encode(const asn1SccPoseUpdateThreshold* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPoseUpdateThreshold_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode distance */
	    ret = asn1SccT_Double_ACN_Encode(&pVal->distance, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode angle */
	        ret = asn1SccT_Double_ACN_Encode(&pVal->angle, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccPoseUpdateThreshold_ACN_Decode(asn1SccPoseUpdateThreshold* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode distance */
    ret = asn1SccT_Double_ACN_Decode(&pVal->distance, pBitStrm, pErrCode);
    if (ret) {
        /*Decode angle */
        ret = asn1SccT_Double_ACN_Decode(&pVal->angle, pBitStrm, pErrCode);

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPosition2D_Initialize(asn1SccPosition2D* pVal)
{
    *pVal = (asn1SccPosition2D) {    .arr = 
    {
        0.00000000000000000000E+000        
    }
};
}
#endif

 
flag asn1SccPosition2D_IsConstraintValid(const asn1SccPosition2D* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVector2d_IsConstraintValid(pVal, pErrCode);

	return ret;
}

flag asn1SccPosition2D_Encode(const asn1SccPosition2D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPosition2D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccVector2d_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccPosition2D_Decode(asn1SccPosition2D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = asn1SccVector2d_Decode(pVal, pBitStrm, pErrCode);

	return ret;
}

flag asn1SccPosition2D_ACN_Encode(const asn1SccPosition2D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPosition2D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccVector2d_ACN_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccPosition2D_ACN_Decode(asn1SccPosition2D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccVector2d_ACN_Decode(pVal, pBitStrm, pErrCode);
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPose2D_Initialize(asn1SccPose2D* pVal)
{
    *pVal = (asn1SccPose2D) {
    .position = {    .arr = 
        {
            0.00000000000000000000E+000        
        }
    },
    .orientation = 0.00000000000000000000E+000
};
}
#endif

 
flag asn1SccPose2D_IsConstraintValid(const asn1SccPose2D* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccPosition2D_IsConstraintValid(&pVal->position, pErrCode);
	if (ret) {
	    ret = asn1SccT_Double_IsConstraintValid(&pVal->orientation, pErrCode);
	
	}

	return ret;
}

flag asn1SccPose2D_Encode(const asn1SccPose2D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPose2D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode position */
	    ret = asn1SccPosition2D_Encode(&pVal->position, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orientation */
	        ret = asn1SccT_Double_Encode(&pVal->orientation, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccPose2D_Decode(asn1SccPose2D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode position */
	ret = asn1SccPosition2D_Decode(&pVal->position, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode orientation */
	    ret = asn1SccT_Double_Decode(&pVal->orientation, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccPose2D_ACN_Encode(const asn1SccPose2D* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPose2D_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode position */
	    ret = asn1SccPosition2D_ACN_Encode(&pVal->position, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orientation */
	        ret = asn1SccT_Double_ACN_Encode(&pVal->orientation, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccPose2D_ACN_Decode(asn1SccPose2D* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode position */
    ret = asn1SccPosition2D_ACN_Decode(&pVal->position, pBitStrm, pErrCode);
    if (ret) {
        /*Decode orientation */
        ret = asn1SccT_Double_ACN_Decode(&pVal->orientation, pBitStrm, pErrCode);

    }


    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPosition_Initialize(asn1SccPosition* pVal)
{
    *pVal = (asn1SccPosition) {    .arr = 
    {
        0.00000000000000000000E+000        
    }
};
}
#endif

 
flag asn1SccPosition_IsConstraintValid(const asn1SccPosition* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVector3d_IsConstraintValid(pVal, pErrCode);

	return ret;
}

flag asn1SccPosition_Encode(const asn1SccPosition* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPosition_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccVector3d_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccPosition_Decode(asn1SccPosition* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = asn1SccVector3d_Decode(pVal, pBitStrm, pErrCode);

	return ret;
}

flag asn1SccPosition_ACN_Encode(const asn1SccPosition* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPosition_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccVector3d_ACN_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccPosition_ACN_Decode(asn1SccPosition* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccVector3d_ACN_Decode(pVal, pBitStrm, pErrCode);
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccOrientation_Initialize(asn1SccOrientation* pVal)
{
    *pVal = (asn1SccOrientation) {    .arr = 
    {
        0.00000000000000000000E+000        
    }
};
}
#endif

 
flag asn1SccOrientation_IsConstraintValid(const asn1SccOrientation* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccQuaterniond_IsConstraintValid(pVal, pErrCode);

	return ret;
}

flag asn1SccOrientation_Encode(const asn1SccOrientation* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccOrientation_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccQuaterniond_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccOrientation_Decode(asn1SccOrientation* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	ret = asn1SccQuaterniond_Decode(pVal, pBitStrm, pErrCode);

	return ret;
}

flag asn1SccOrientation_ACN_Encode(const asn1SccOrientation* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccOrientation_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    ret = asn1SccQuaterniond_ACN_Encode(pVal, pBitStrm, pErrCode, FALSE);
    }

	return ret;
}

flag asn1SccOrientation_ACN_Decode(asn1SccOrientation* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    ret = asn1SccQuaterniond_ACN_Decode(pVal, pBitStrm, pErrCode);
    return ret;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccPose_Initialize(asn1SccPose* pVal)
{
    *pVal = (asn1SccPose) {
    .pos = {    .arr = 
        {
            0.00000000000000000000E+000        
        }
    },
    .orient = {    .arr = 
        {
            0.00000000000000000000E+000        
        }
    }
};
}
#endif

 
flag asn1SccPose_IsConstraintValid(const asn1SccPose* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccPosition_IsConstraintValid(&pVal->pos, pErrCode);
	if (ret) {
	    ret = asn1SccOrientation_IsConstraintValid(&pVal->orient, pErrCode);
	
	}

	return ret;
}

flag asn1SccPose_Encode(const asn1SccPose* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;
    
	ret = bCheckConstraints ? asn1SccPose_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode pos */
	    ret = asn1SccPosition_Encode(&pVal->pos, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orient */
	        ret = asn1SccOrientation_Encode(&pVal->orient, pBitStrm, pErrCode, FALSE);
	    
	    }
    }

	return ret;
}

flag asn1SccPose_Decode(asn1SccPose* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;

	/*Decode pos */
	ret = asn1SccPosition_Decode(&pVal->pos, pBitStrm, pErrCode);
	if (ret) {
	    /*Decode orient */
	    ret = asn1SccOrientation_Decode(&pVal->orient, pBitStrm, pErrCode);
	
	}


	return ret;
}

flag asn1SccPose_ACN_Encode(const asn1SccPose* pVal, BitStream* pBitStrm, int* pErrCode, flag bCheckConstraints)
{
    flag ret = TRUE;

    ret = bCheckConstraints ? asn1SccPose_IsConstraintValid(pVal, pErrCode) : TRUE ;
	if (ret) {
	    /*Encode pos */
	    ret = asn1SccPosition_ACN_Encode(&pVal->pos, pBitStrm, pErrCode, FALSE);
	    if (ret) {
	        /*Encode orient */
	        ret = asn1SccOrientation_ACN_Encode(&pVal->orient, pBitStrm, pErrCode, FALSE);

	    }

    }

	return ret;
}

flag asn1SccPose_ACN_Decode(asn1SccPose* pVal, BitStream* pBitStrm, int* pErrCode)
{
    flag ret = TRUE;
    *pErrCode = 0;
    /*Decode pos */
    ret = asn1SccPosition_ACN_Decode(&pVal->pos, pBitStrm, pErrCode);
    if (ret) {
        /*Decode orient */
        ret = asn1SccOrientation_ACN_Decode(&pVal->orient, pBitStrm, pErrCode);

    }


    return ret;
}

