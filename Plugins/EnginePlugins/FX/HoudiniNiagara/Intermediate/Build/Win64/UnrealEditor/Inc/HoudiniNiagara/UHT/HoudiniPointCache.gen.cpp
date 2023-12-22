// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/HoudiniPointCache.h"
#include "HoudiniNiagara/Public/PointIndexes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniPointCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType();
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FPointIndexes();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAttributeIndexFromString(Z_Param_Attribute,Z_Param_Out_AttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetAttributeIndexInArrayFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAttribute);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InAttributeArray);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutAttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHoudiniPointCache::GetAttributeIndexInArrayFromString(Z_Param_InAttribute,Z_Param_Out_InAttributeArray,Z_Param_Out_OutAttributeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetColorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetColorValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatSampleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatSampleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_Out_SampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetFloatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatValueForString(Z_Param_Out_SampleIndex,Z_Param_Attribute,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetImpulseValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImpulseValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastPointIDToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastPointIDToSpawnAtTime(Z_Param_Out_Time,Z_Param_Out_lastID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLastSampleIndexAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_lastSampleIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastSampleIndexAtTime(Z_Param_Out_desiredTime,Z_Param_Out_lastSampleIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetLifeValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetLifeValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNormalValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNormalValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetNumberOfSamples)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfSamples();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointFloatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointFloatValueAtTime(Z_Param_POINTID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointIDsToSpawnAtTime)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LastSpawnedPointID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LastSpawnTimeRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointIDsToSpawnAtTime(Z_Param_Out_desiredTime,Z_Param_Out_MinID,Z_Param_Out_MaxID,Z_Param_Out_Count,Z_Param_Out_LastSpawnedPointID,Z_Param_Out_LastSpawnTime,Z_Param_Out_LastSpawnTimeRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointInt32ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointInt32ValueAtTime(Z_Param_POINTID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLife)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLife(Z_Param_Out_POINTID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointLifeAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointLifeAtTime(Z_Param_Out_POINTID,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointPositionAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointPositionAtTime(Z_Param_Out_POINTID,Z_Param_Out_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTime(Z_Param_POINTID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointQuatValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Quat);
		P_GET_UBOOL(Z_Param_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointQuatValueAtTimeForString(Z_Param_POINTID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Quat,Z_Param_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointType)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointType(Z_Param_Out_POINTID,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointTypes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPointTypes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTime(Z_Param_Out_POINTID,Z_Param_Out_AttributeIndex,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueAtTimeForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointValueAtTimeForString(Z_Param_Out_POINTID,Z_Param_Attribute,Z_Param_Out_desiredTime,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointValueIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPointIndexes>*)Z_Param__Result=P_THIS->GetPointValueIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTime(Z_Param_POINTID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVector4ValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVector4ValueAtTimeForString(Z_Param_POINTID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTime(Z_Param_POINTID,Z_Param_AttributeIndex,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPointVectorValueAtTimeForString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_POINTID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_PROPERTY(FFloatProperty,Z_Param_desiredTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
		P_GET_UBOOL(Z_Param_DoSwap);
		P_GET_UBOOL(Z_Param_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPointVectorValueAtTimeForString(Z_Param_POINTID,Z_Param_Attribute,Z_Param_desiredTime,Z_Param_Out_Vector,Z_Param_DoSwap,Z_Param_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetPositionValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPositionValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValue(Z_Param_Out_SampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_Value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetQuatValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_DoHoudiniToUnrealConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuatValueForString(Z_Param_Out_SampleIndex,Z_Param_Attribute,Z_Param_Out_Value,Z_Param_Out_DoHoudiniToUnrealConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSampleIndexesForPointAtTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_POINTID);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_desiredTime);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PrevSampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NextSampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PrevWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSampleIndexesForPointAtTime(Z_Param_Out_POINTID,Z_Param_Out_desiredTime,Z_Param_Out_PrevSampleIndex,Z_Param_Out_NextSampleIndex,Z_Param_Out_PrevWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpawnTimes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetSpawnTimes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetSpecialAttributeIndexes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetSpecialAttributeIndexes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetTimeValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTimeValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetUseCustomCSVTitleRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseCustomCSVTitleRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4Value)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4Value(Z_Param_Out_SampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVector4ValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVector4ValueForString(Z_Param_Out_SampleIndex,Z_Param_Attribute,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_attrIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_Out_SampleIndex,Z_Param_Out_attrIndex,Z_Param_Out_Value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVectorValueForString)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_Attribute);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_DoSwap);
		P_GET_UBOOL_REF(Z_Param_Out_DoScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVectorValueForString(Z_Param_Out_SampleIndex,Z_Param_Attribute,Z_Param_Out_Value,Z_Param_Out_DoSwap,Z_Param_Out_DoScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execGetVelocityValue)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SampleIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVelocityValue(Z_Param_Out_SampleIndex,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHoudiniPointCache::execSetUseCustomCSVTitleRow)
	{
		P_GET_UBOOL(Z_Param_bInUseCustomCSVTitleRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseCustomCSVTitleRow(Z_Param_bInUseCustomCSVTitleRow);
		P_NATIVE_END;
	}
	void UHoudiniPointCache::StaticRegisterNativesUHoudiniPointCache()
	{
		UClass* Class = UHoudiniPointCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeIndexFromString", &UHoudiniPointCache::execGetAttributeIndexFromString },
			{ "GetAttributeIndexInArrayFromString", &UHoudiniPointCache::execGetAttributeIndexInArrayFromString },
			{ "GetColorValue", &UHoudiniPointCache::execGetColorValue },
			{ "GetFloatSampleData", &UHoudiniPointCache::execGetFloatSampleData },
			{ "GetFloatValue", &UHoudiniPointCache::execGetFloatValue },
			{ "GetFloatValueForString", &UHoudiniPointCache::execGetFloatValueForString },
			{ "GetImpulseValue", &UHoudiniPointCache::execGetImpulseValue },
			{ "GetLastPointIDToSpawnAtTime", &UHoudiniPointCache::execGetLastPointIDToSpawnAtTime },
			{ "GetLastSampleIndexAtTime", &UHoudiniPointCache::execGetLastSampleIndexAtTime },
			{ "GetLifeValues", &UHoudiniPointCache::execGetLifeValues },
			{ "GetNormalValue", &UHoudiniPointCache::execGetNormalValue },
			{ "GetNumberOfAttributes", &UHoudiniPointCache::execGetNumberOfAttributes },
			{ "GetNumberOfPoints", &UHoudiniPointCache::execGetNumberOfPoints },
			{ "GetNumberOfSamples", &UHoudiniPointCache::execGetNumberOfSamples },
			{ "GetPointFloatValueAtTime", &UHoudiniPointCache::execGetPointFloatValueAtTime },
			{ "GetPointIDsToSpawnAtTime", &UHoudiniPointCache::execGetPointIDsToSpawnAtTime },
			{ "GetPointInt32ValueAtTime", &UHoudiniPointCache::execGetPointInt32ValueAtTime },
			{ "GetPointLife", &UHoudiniPointCache::execGetPointLife },
			{ "GetPointLifeAtTime", &UHoudiniPointCache::execGetPointLifeAtTime },
			{ "GetPointPositionAtTime", &UHoudiniPointCache::execGetPointPositionAtTime },
			{ "GetPointQuatValueAtTime", &UHoudiniPointCache::execGetPointQuatValueAtTime },
			{ "GetPointQuatValueAtTimeForString", &UHoudiniPointCache::execGetPointQuatValueAtTimeForString },
			{ "GetPointType", &UHoudiniPointCache::execGetPointType },
			{ "GetPointTypes", &UHoudiniPointCache::execGetPointTypes },
			{ "GetPointValueAtTime", &UHoudiniPointCache::execGetPointValueAtTime },
			{ "GetPointValueAtTimeForString", &UHoudiniPointCache::execGetPointValueAtTimeForString },
			{ "GetPointValueIndexes", &UHoudiniPointCache::execGetPointValueIndexes },
			{ "GetPointVector4ValueAtTime", &UHoudiniPointCache::execGetPointVector4ValueAtTime },
			{ "GetPointVector4ValueAtTimeForString", &UHoudiniPointCache::execGetPointVector4ValueAtTimeForString },
			{ "GetPointVectorValueAtTime", &UHoudiniPointCache::execGetPointVectorValueAtTime },
			{ "GetPointVectorValueAtTimeForString", &UHoudiniPointCache::execGetPointVectorValueAtTimeForString },
			{ "GetPositionValue", &UHoudiniPointCache::execGetPositionValue },
			{ "GetQuatValue", &UHoudiniPointCache::execGetQuatValue },
			{ "GetQuatValueForString", &UHoudiniPointCache::execGetQuatValueForString },
			{ "GetSampleIndexesForPointAtTime", &UHoudiniPointCache::execGetSampleIndexesForPointAtTime },
			{ "GetSpawnTimes", &UHoudiniPointCache::execGetSpawnTimes },
			{ "GetSpecialAttributeIndexes", &UHoudiniPointCache::execGetSpecialAttributeIndexes },
			{ "GetTimeValue", &UHoudiniPointCache::execGetTimeValue },
			{ "GetUseCustomCSVTitleRow", &UHoudiniPointCache::execGetUseCustomCSVTitleRow },
			{ "GetVector4Value", &UHoudiniPointCache::execGetVector4Value },
			{ "GetVector4ValueForString", &UHoudiniPointCache::execGetVector4ValueForString },
			{ "GetVectorValue", &UHoudiniPointCache::execGetVectorValue },
			{ "GetVectorValueForString", &UHoudiniPointCache::execGetVectorValueForString },
			{ "GetVelocityValue", &UHoudiniPointCache::execGetVelocityValue },
			{ "SetUseCustomCSVTitleRow", &UHoudiniPointCache::execSetUseCustomCSVTitleRow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexFromString_Parms
		{
			FString Attribute;
			int32 AttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexFromString_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::HoudiniPointCache_eventGetAttributeIndexFromString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics
	{
		struct HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms
		{
			FString InAttribute;
			TArray<FString> InAttributeArray;
			int32 OutAttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAttributeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAttributeArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutAttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner = { "InAttributeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray = { "InAttributeArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, InAttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex = { "OutAttributeIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms, OutAttributeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_InAttributeArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_OutAttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetAttributeIndexInArrayFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::HoudiniPointCache_eventGetAttributeIndexInArrayFromString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics
	{
		struct HoudiniPointCache_eventGetColorValue_Parms
		{
			int32 SampleIndex;
			FLinearColor Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetColorValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetColorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetColorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::HoudiniPointCache_eventGetColorValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics
	{
		struct HoudiniPointCache_eventGetFloatSampleData_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatSampleData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatSampleData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::HoudiniPointCache_eventGetFloatSampleData_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics
	{
		struct HoudiniPointCache_eventGetFloatValue_Parms
		{
			int32 SampleIndex;
			int32 attrIndex;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::HoudiniPointCache_eventGetFloatValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetFloatValueForString_Parms
		{
			int32 SampleIndex;
			FString Attribute;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetFloatValueForString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetFloatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetFloatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetFloatValueForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::HoudiniPointCache_eventGetFloatValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics
	{
		struct HoudiniPointCache_eventGetImpulseValue_Parms
		{
			int32 SampleIndex;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetImpulseValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetImpulseValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetImpulseValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetImpulseValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::HoudiniPointCache_eventGetImpulseValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms
		{
			float Time;
			int32 lastID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID = { "lastID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms, lastID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_lastID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastPointIDToSpawnAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::HoudiniPointCache_eventGetLastPointIDToSpawnAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics
	{
		struct HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms
		{
			float desiredTime;
			int32 lastSampleIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_lastSampleIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex = { "lastSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms, lastSampleIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_lastSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLastSampleIndexAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::HoudiniPointCache_eventGetLastSampleIndexAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics
	{
		struct HoudiniPointCache_eventGetLifeValues_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetLifeValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetLifeValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::HoudiniPointCache_eventGetLifeValues_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics
	{
		struct HoudiniPointCache_eventGetNormalValue_Parms
		{
			int32 SampleIndex;
			FVector Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetNormalValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetNormalValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetNormalValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNormalValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::HoudiniPointCache_eventGetNormalValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfAttributes_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfAttributes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::HoudiniPointCache_eventGetNumberOfAttributes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::HoudiniPointCache_eventGetNumberOfPoints_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics
	{
		struct HoudiniPointCache_eventGetNumberOfSamples_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetNumberOfSamples_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetNumberOfSamples", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::HoudiniPointCache_eventGetNumberOfSamples_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointFloatValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointFloatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointFloatValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::HoudiniPointCache_eventGetPointFloatValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms
		{
			float desiredTime;
			int32 MinID;
			int32 MaxID;
			int32 Count;
			int32 LastSpawnedPointID;
			float LastSpawnTime;
			float LastSpawnTimeRequest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastSpawnedPointID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpawnTimeRequest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID = { "MinID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MinID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID = { "MaxID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, MaxID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID = { "LastSpawnedPointID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnedPointID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime = { "LastSpawnTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest = { "LastSpawnTimeRequest", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms, LastSpawnTimeRequest), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MinID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_MaxID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnedPointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_LastSpawnTimeRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointIDsToSpawnAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::HoudiniPointCache_eventGetPointIDsToSpawnAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			int32 Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointInt32ValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::HoudiniPointCache_eventGetPointInt32ValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics
	{
		struct HoudiniPointCache_eventGetPointLife_Parms
		{
			int32 POINTID;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_POINTID_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLife_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLife_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLife_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLife", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::HoudiniPointCache_eventGetPointLife_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLife()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLife_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointLifeAtTime_Parms
		{
			int32 POINTID;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointLifeAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointLifeAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointLifeAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointLifeAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::HoudiniPointCache_eventGetPointLifeAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointPositionAtTime_Parms
		{
			int32 POINTID;
			float desiredTime;
			FVector Vector;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointPositionAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointPositionAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointPositionAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointPositionAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::HoudiniPointCache_eventGetPointPositionAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::HoudiniPointCache_eventGetPointQuatValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms
		{
			int32 POINTID;
			FString Attribute;
			float desiredTime;
			FQuat Quat;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointQuatValueAtTimeForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointQuatValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics
	{
		struct HoudiniPointCache_eventGetPointType_Parms
		{
			int32 POINTID;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_POINTID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointType_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointType_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::HoudiniPointCache_eventGetPointType_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics
	{
		struct HoudiniPointCache_eventGetPointTypes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointTypes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::HoudiniPointCache_eventGetPointTypes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::HoudiniPointCache_eventGetPointValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointValueAtTimeForString_Parms
		{
			int32 POINTID;
			FString Attribute;
			float desiredTime;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueAtTimeForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics
	{
		struct HoudiniPointCache_eventGetPointValueIndexes_Parms
		{
			TArray<FPointIndexes> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(nullptr, 0) }; // 1258495890
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointValueIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1258495890
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointValueIndexes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::HoudiniPointCache_eventGetPointValueIndexes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms
		{
			int32 POINTID;
			FString Attribute;
			float desiredTime;
			FVector4 Vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVector4ValueAtTimeForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVector4ValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTime_Parms
		{
			int32 POINTID;
			int32 AttributeIndex;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::HoudiniPointCache_eventGetPointVectorValueAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics
	{
		struct HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms
		{
			int32 POINTID;
			FString Attribute;
			float desiredTime;
			FVector Vector;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, POINTID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, desiredTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPointVectorValueAtTimeForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::HoudiniPointCache_eventGetPointVectorValueAtTimeForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics
	{
		struct HoudiniPointCache_eventGetPositionValue_Parms
		{
			int32 SampleIndex;
			FVector Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetPositionValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetPositionValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetPositionValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetPositionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::HoudiniPointCache_eventGetPositionValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics
	{
		struct HoudiniPointCache_eventGetQuatValue_Parms
		{
			int32 SampleIndex;
			int32 attrIndex;
			FQuat Value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValue_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::HoudiniPointCache_eventGetQuatValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics
	{
		struct HoudiniPointCache_eventGetQuatValueForString_Parms
		{
			int32 SampleIndex;
			FString Attribute;
			FQuat Value;
			bool DoHoudiniToUnrealConversion;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoHoudiniToUnrealConversion_MetaData[];
#endif
		static void NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoHoudiniToUnrealConversion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetQuatValueForString_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->DoHoudiniToUnrealConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion = { "DoHoudiniToUnrealConversion", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetQuatValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetQuatValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_DoHoudiniToUnrealConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetQuatValueForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::HoudiniPointCache_eventGetQuatValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics
	{
		struct HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms
		{
			int32 POINTID;
			float desiredTime;
			int32 PrevSampleIndex;
			int32 NextSampleIndex;
			float PrevWeight;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_desiredTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrevSampleIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextSampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevWeight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_POINTID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, POINTID), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime = { "desiredTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, desiredTime), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex = { "PrevSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevSampleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex = { "NextSampleIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, NextSampleIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight = { "PrevWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms, PrevWeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_desiredTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_NextSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_PrevWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSampleIndexesForPointAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::HoudiniPointCache_eventGetSampleIndexesForPointAtTime_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics
	{
		struct HoudiniPointCache_eventGetSpawnTimes_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSpawnTimes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpawnTimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::HoudiniPointCache_eventGetSpawnTimes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics
	{
		struct HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetSpecialAttributeIndexes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::HoudiniPointCache_eventGetSpecialAttributeIndexes_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics
	{
		struct HoudiniPointCache_eventGetTimeValue_Parms
		{
			int32 SampleIndex;
			float Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetTimeValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetTimeValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetTimeValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetTimeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::HoudiniPointCache_eventGetTimeValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetUseCustomCSVTitleRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventGetUseCustomCSVTitleRow_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics
	{
		struct HoudiniPointCache_eventGetVector4Value_Parms
		{
			int32 SampleIndex;
			int32 attrIndex;
			FVector4 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4Value_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4Value_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4Value_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::HoudiniPointCache_eventGetVector4Value_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVector4ValueForString_Parms
		{
			int32 SampleIndex;
			FString Attribute;
			FVector4 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVector4ValueForString_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVector4ValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVector4ValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVector4ValueForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::HoudiniPointCache_eventGetVector4ValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics
	{
		struct HoudiniPointCache_eventGetVectorValue_Parms
		{
			int32 SampleIndex;
			int32 attrIndex;
			FVector Value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attrIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_attrIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex = { "attrIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, attrIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_attrIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::HoudiniPointCache_eventGetVectorValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics
	{
		struct HoudiniPointCache_eventGetVectorValueForString_Parms
		{
			int32 SampleIndex;
			FString Attribute;
			FVector Value;
			bool DoSwap;
			bool DoScale;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoSwap_MetaData[];
#endif
		static void NewProp_DoSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoSwap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoScale_MetaData[];
#endif
		static void NewProp_DoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoScale;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_SampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, Attribute), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVectorValueForString_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap = { "DoSwap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->DoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale = { "DoScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale_MetaData)) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVectorValueForString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVectorValueForString_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_DoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVectorValueForString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::HoudiniPointCache_eventGetVectorValueForString_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics
	{
		struct HoudiniPointCache_eventGetVelocityValue_Parms
		{
			int32 SampleIndex;
			FVector Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_SampleIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_SampleIndex = { "SampleIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, SampleIndex), METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_SampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_SampleIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HoudiniPointCache_eventGetVelocityValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventGetVelocityValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventGetVelocityValue_Parms), &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_SampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "GetVelocityValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::HoudiniPointCache_eventGetVelocityValue_Parms), Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics
	{
		struct HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms
		{
			bool bInUseCustomCSVTitleRow;
		};
		static void NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseCustomCSVTitleRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms*)Obj)->bInUseCustomCSVTitleRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow = { "bInUseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::NewProp_bInUseCustomCSVTitleRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoudiniPointCache, nullptr, "SetUseCustomCSVTitleRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::HoudiniPointCache_eventSetUseCustomCSVTitleRow_Parms), Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniPointCache);
	UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister()
	{
		return UHoudiniPointCache::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniPointCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSampleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSampleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCSVTitleRow_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceCSVTitleRow;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatSampleData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatSampleData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatSampleData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnTimes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LifeValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointTypes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpecialAttributeIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAttributeIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecialAttributeIndexes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointValueIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointValueIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointValueIndexes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomCSVTitleRow_MetaData[];
#endif
		static void NewProp_UseCustomCSVTitleRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomCSVTitleRow;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniPointCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoudiniPointCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexFromString, "GetAttributeIndexFromString" }, // 2890690791
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetAttributeIndexInArrayFromString, "GetAttributeIndexInArrayFromString" }, // 1788721983
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetColorValue, "GetColorValue" }, // 3719180540
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatSampleData, "GetFloatSampleData" }, // 1792398032
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValue, "GetFloatValue" }, // 2277772438
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetFloatValueForString, "GetFloatValueForString" }, // 657997653
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetImpulseValue, "GetImpulseValue" }, // 795009592
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastPointIDToSpawnAtTime, "GetLastPointIDToSpawnAtTime" }, // 3944908619
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLastSampleIndexAtTime, "GetLastSampleIndexAtTime" }, // 3645709365
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetLifeValues, "GetLifeValues" }, // 217152007
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNormalValue, "GetNormalValue" }, // 2785841580
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfAttributes, "GetNumberOfAttributes" }, // 3166771691
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfPoints, "GetNumberOfPoints" }, // 2248532043
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetNumberOfSamples, "GetNumberOfSamples" }, // 2533625280
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointFloatValueAtTime, "GetPointFloatValueAtTime" }, // 4267012943
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointIDsToSpawnAtTime, "GetPointIDsToSpawnAtTime" }, // 718030631
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointInt32ValueAtTime, "GetPointInt32ValueAtTime" }, // 3416430143
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLife, "GetPointLife" }, // 3194379493
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointLifeAtTime, "GetPointLifeAtTime" }, // 219247068
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointPositionAtTime, "GetPointPositionAtTime" }, // 900368767
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTime, "GetPointQuatValueAtTime" }, // 2000765075
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointQuatValueAtTimeForString, "GetPointQuatValueAtTimeForString" }, // 342845746
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointType, "GetPointType" }, // 1691297449
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointTypes, "GetPointTypes" }, // 3530717744
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTime, "GetPointValueAtTime" }, // 2798363732
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueAtTimeForString, "GetPointValueAtTimeForString" }, // 874693325
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointValueIndexes, "GetPointValueIndexes" }, // 2001108734
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTime, "GetPointVector4ValueAtTime" }, // 161988913
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVector4ValueAtTimeForString, "GetPointVector4ValueAtTimeForString" }, // 3447724224
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTime, "GetPointVectorValueAtTime" }, // 503883136
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPointVectorValueAtTimeForString, "GetPointVectorValueAtTimeForString" }, // 379892439
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetPositionValue, "GetPositionValue" }, // 1724542465
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValue, "GetQuatValue" }, // 3409034665
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetQuatValueForString, "GetQuatValueForString" }, // 3157002325
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSampleIndexesForPointAtTime, "GetSampleIndexesForPointAtTime" }, // 1173457548
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpawnTimes, "GetSpawnTimes" }, // 73941112
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetSpecialAttributeIndexes, "GetSpecialAttributeIndexes" }, // 2291379933
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetTimeValue, "GetTimeValue" }, // 463853267
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetUseCustomCSVTitleRow, "GetUseCustomCSVTitleRow" }, // 2401716983
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4Value, "GetVector4Value" }, // 907677917
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVector4ValueForString, "GetVector4ValueForString" }, // 2011826639
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValue, "GetVectorValue" }, // 2640012788
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVectorValueForString, "GetVectorValueForString" }, // 3785708688
		{ &Z_Construct_UFunction_UHoudiniPointCache_GetVelocityValue, "GetVelocityValue" }, // 4188054776
		{ &Z_Construct_UFunction_UHoudiniPointCache_SetUseCustomCSVTitleRow, "SetUseCustomCSVTitleRow" }, // 1125883823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HoudiniPointCache.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, Filename), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, NumberOfSamples), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes = { "NumberOfAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, NumberOfAttributes), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints = { "NumberOfPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, NumberOfPoints), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, NumberOfFrames), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame = { "FirstFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, FirstFrame), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame = { "LastFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, LastFrame), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime = { "MinSampleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, MinSampleTime), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime = { "MaxSampleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, MaxSampleTime), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow = { "SourceCSVTitleRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, SourceCSVTitleRow), METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner = { "AttributeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray = { "AttributeArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, AttributeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner = { "FloatSampleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData = { "FloatSampleData", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, FloatSampleData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner = { "SpawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes = { "SpawnTimes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, SpawnTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner = { "LifeValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues = { "LifeValues", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, LifeValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner = { "PointTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes = { "PointTypes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, PointTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes = { "SpecialAttributeIndexes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, SpecialAttributeIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPointIndexes, METADATA_PARAMS(nullptr, 0) }; // 1258495890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes = { "PointValueIndexes", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, PointValueIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_MetaData)) }; // 1258495890
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit(void* Obj)
	{
		((UHoudiniPointCache*)Obj)->UseCustomCSVTitleRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow = { "UseCustomCSVTitleRow", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniPointCache), &Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniPointCache" },
		{ "ModuleRelativePath", "Public/HoudiniPointCache.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniPointCache, FileType), Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_MetaData)) }; // 1944666359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FirstFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LastFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MinSampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_MaxSampleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SourceCSVTitleRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_AttributeArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FloatSampleData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpawnTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_LifeValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_SpecialAttributeIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_PointValueIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_UseCustomCSVTitleRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniPointCache_Statics::NewProp_FileType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniPointCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniPointCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams = {
		&UHoudiniPointCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniPointCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniPointCache()
	{
		if (!Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton, Z_Construct_UClass_UHoudiniPointCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniPointCache.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UClass* StaticClass<UHoudiniPointCache>()
	{
		return UHoudiniPointCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniPointCache);
	UHoudiniPointCache::~UHoudiniPointCache() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniPointCache, UHoudiniPointCache::StaticClass, TEXT("UHoudiniPointCache"), &Z_Registration_Info_UClass_UHoudiniPointCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniPointCache), 389175658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_2139653467(TEXT("/Script/HoudiniNiagara"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
