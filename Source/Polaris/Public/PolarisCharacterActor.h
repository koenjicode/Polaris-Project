#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "ESupportUEAnimationMode.h"
#include "AbilityItemIdWrapPinStruct.h"
#include "AnimBPType.h"
#include "AssignPerMaterialStruct.h"
#include "BakeForMeshInnerProcessDataCotainer.h"
#include "BakeForMeshPreprocessDataCotainer.h"
#include "BaseMakeItemSetStruct.h"
#include "DependencyChangeParam.h"
#include "DesignAssignStruct.h"
#include "DynamicBoneDataStruct.h"
#include "DynamicBoneParam.h"
#include "EBodySplitType.h"
#include "EMeshBodyRegionType.h"
#include "EMotionLevelSequence.h"
#include "EPolarisBodyTransformState.h"
#include "EPolarisKatanaVisibility.h"
#include "EPolarisTracePartsId.h"
#include "ESkinType.h"
#include "EventOnArmorSucceededParam.h"
#include "EventOnChangeCharacterColorBeginParam.h"
#include "EventOnChangeCharacterColorEndParam.h"
#include "EventOnChangeCharacterSelectSeqeunceParam.h"
#include "EventOnChangeSweatWetDirtyRatioParam.h"
#include "EventOnCharacterMeshPartsOffParam.h"
#include "EventOnCharacterMeshPartsOnParam.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDevilEndEffectParam.h"
#include "EventOnDownParam.h"
#include "EventOnEvaluteLiveLinkMotionParam.h"
#include "EventOnForceSuntanFlagParam.h"
#include "EventOnForceUpdateActorLocationParam.h"
#include "EventOnFresnelBeginEffectParam.h"
#include "EventOnFresnelEndEffectParam.h"
#include "EventOnGenericItemEventParam.h"
#include "EventOnGuardDamageParam.h"
#include "EventOnHeatEffectParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnItemOnDamagedEventParam.h"
#include "EventOnKOParam.h"
#include "EventOnNoticeBombEffectParam.h"
#include "EventOnNoticeBombEffectStopParam.h"
#include "EventOnPetAnimationStartParam.h"
#include "EventOnPetCancelParam.h"
#include "EventOnPlayMotionLevelSequenceParam.h"
#include "EventOnPlayerActivateParam.h"
#include "EventOnPlayerDeActivateParam.h"
#include "EventOnPlayerEntryParam.h"
#include "EventOnPlayerMotionShiftParam.h"
#include "EventOnPlayerUnEntryParam.h"
#include "EventOnPoisonDamageParam.h"
#include "EventOnPowerCrashBeginParam.h"
#include "EventOnPowerCrashEndParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageArtsPreAttackHitParam.h"
#include "EventOnRageAttackBeginParam.h"
#include "EventOnRageAttackEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnResetCharacterDynamicBoneParam.h"
#include "EventOnResetPlayerPhysicsParam.h"
#include "EventOnSetCameraCheckParam.h"
#include "EventOnStopMotionLevelSequenceParam.h"
#include "EventOnWarpBeginEffectParam.h"
#include "EventOnWarpEndEffectParam.h"
#include "EventOnZoneBeginCutInEndParam.h"
#include "EventOnZoneBeginEffectParam.h"
#include "EventOnZoneEndEffectParam.h"
#include "EventOnZoneEndParam.h"
#include "ItemActorHolder.h"
#include "ItemPositionKey.h"
#include "ItemPositionWrapPinStruct.h"
#include "MakeBakeMaterialInstanceDynamicContainer.h"
#include "MakeBakeRenderingTargetsContainer.h"
#include "PolarisCharacterJointAsset.h"
#include "PolarisCharacterSweatControlParam.h"
#include "PolarisLightingChannels.h"
#include "SESTBakeData.h"
#include "SkeletalMeshMergeParams.h"
#include "SlaveMeshSetStruct.h"
#include "Templates/SubclassOf.h"
#include "WeaponBoneName.h"
#include "PolarisCharacterActor.generated.h"

class APolarisCharacterEffectManager;
class APolarisCharacterMissile;
class APolarisDemoCharacterActor;
class APolarisItemBaseActor;
class UBaseEyeItem;
class UBaseSESTItem;
class UCapsuleComponent;
class UCatwalkClothCollisionAsset;
class UCatwalkClothComponentBase;
class UCatwalkClothOverride;
class UChildActorComponent;
class UCustomizeSet;
class UDynamicBoneParamAsset;
class UGFurAsset;
class UGFurComponent;
class UItemOffsetSlotDataAsset;
class UItemPrefab;
class UJiggleParamAsset;
class ULevelSequence;
class ULevelSequencePlayer;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMeshComponent;
class UMissileManagerComponent;
class UNiagaraComponent;
class UObject;
class UParentConstraintBinary;
class UPhoenixProportionBinary;
class UPhoenixSkeletonBinary;
class UPhysicsAsset;
class UPolarisCharacterAnimInstance;
class UPolarisCharacterUniqueComponent;
class UPolarisMasterSkeletalMeshComponent;
class UPolarisTraceComponent;
class UPolarisUMGRageArts;
class UPolarisWrinkleComponent;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USkeleton;
class USkeletonMirrorAsset;
class UTextureRenderTarget2D;
class UWazaManagerComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCharacterSelectSequence, FEventOnChangeCharacterSelectSeqeunceParam, Param);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkeletalMeshMergeParams MeshMergeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MergedMesh_tempolary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeForMeshPreprocessDataCotainer mMainMeshContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeForMeshPreprocessDataCotainer mSubMeshContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeForMeshInnerProcessDataCotainer mInnerDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMakeBakeMaterialInstanceDynamicContainer mMainMIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMakeBakeRenderingTargetsContainer mMainRTContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMakeBakeMaterialInstanceDynamicContainer mSubMIDContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMakeBakeRenderingTargetsContainer mSubRTContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> mSESTOriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PredictBakeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BakeCostThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControlLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ControlVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BasePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMyGameDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerFrameSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerMotionFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPolarisCharacterAnimInstance> UseBattleAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPolarisCharacterAnimInstance> UseWaitAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESupportUEAnimationMode SupportUEAnimationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* UseSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialParameterCollection*> MaterialParameterCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixProportionBinary*> PhoenixProportionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicBoneDataStruct> PhoenixDynamicBoneBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicBoneParamAsset* DynamicBoneParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicBoneParam> DynamicBoneParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParentConstraintBinary*> ParentConstraintBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletonMirrorAsset* SkeletonMirrorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJiggleParamAsset* JiggleParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JointGenderMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisCharacterJointAsset JointMaleMaleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisCharacterJointAsset JointMaleFemaleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisCharacterJointAsset JointFemaleMaleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisCharacterJointAsset JointFemaleFemaleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisableMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float JiggleEnvelope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPauseDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPauseDynamicsForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActorVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisWrinkleComponent* WrinkleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisCharacterEffectManager> UseCharacterEffectManagerBP;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, TWeakObjectPtr<UObject>> DramaSpawnableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemPrefab*> SourceItemPrefabArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemPositionKey, FItemActorHolder> ItemActorHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APolarisItemBaseActor*> ExtraItemActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CameraCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisMasterSkeletalMeshComponent* MasterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSlaveMeshSetStruct> SlaveMeshComponentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSlaveMeshSetStruct> AccSlaveMeshComponentSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPolarisCharacterUniqueComponent*> CharacterUniqueComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemPositionKey, FDependencyChangeParam> DependencyChangeParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FItemPositionKey, FItemPositionKey> ChangeDependencyAffectedPosMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkinType SkinType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuntan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TintColorOverlaySuntanRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInterface*> CharacterSkinMaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMissileManagerComponent* MissileManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWazaManagerComponent* WazaManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaitAnimLocation1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaitAnimLocation2p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WaitAnimRotation1p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WaitAnimRotation2p;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WaitAnimLocationCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WaitAnimRotationCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimEntrySeq_CS_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimEntrySeq_CS_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimDecisionSeq_CS_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimDecisionSeq_CS_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimStandingSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimTPoseSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> AnimKamaeSeq_CC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FacialBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMotionLevelSequence, ULevelSequence*> MotionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_LeftUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_RightUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_LeftLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MuscleAnimPartLevelSequence_RightLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MuscleAnimPartCmnLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCustomizeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 DynamicBoneNumResetSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableClothSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsForceDisableClothSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastClothVariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastCollisionVariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClothRootMotionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceClothNormalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CwcTimeDilationForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 CwcNumStepsToBlendFromBindPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SweatBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisCharacterSweatControlParam SweatControlParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Wetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtyBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirtColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsUseAutomaticMPCSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SkinTintColorOverlay_Automatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRebakeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsUseSequenceWrinkleIntensities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity01R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity02G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity03B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity04C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity05M;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceWrinkleIntensity06Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsUseSequenceScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString SequenceScalarParameter0Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceScalarParameter0Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString SequenceScalarParameter1Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SequenceScalarParameter1Value;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeCharacterSelectSequence OnChangeCharacterSelectSequenceDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodySplitType BodySplitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WorkParamIArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WorkParamFArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemOffsetSlotDataAsset* ItemOffsetSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* OptionalPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPolarisUMGRageArts> RageArtsUIAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisUMGRageArts* RageArtsUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SoundPosActor_Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* SoundPosActor_Trans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDemo;
    
    APolarisCharacterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* SpawnMissileRequestFromTag(const FName& Tag, int32 MissileHandle, int32 InstanceIndex, FVector SpawnLocation, FRotator SpawnRotation);
    
    UFUNCTION(BlueprintCallable)
    void SlaveMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip, bool _isAttachMasterMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetWorkParamIForDrama(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisibleAll(int32 vis_flag, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetUpSkin(ESkinType _skintype);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletonToMeshMergeParameters(USkeleton* Skeleton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetPos(FTransform Location, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPetAnimFrame(int32 frame, int32 no);
    
    UFUNCTION(BlueprintCallable)
    void SetNumStepsToSettleAfterReset(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetNumStepsToBlendFromBindPose(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorData();
    
    UFUNCTION(BlueprintCallable)
    void SetMirror(bool bMirror);
    
    UFUNCTION(BlueprintCallable)
    void SetJiggleEnvelope(float Envelope);
    
    UFUNCTION(BlueprintCallable)
    void SetFaceState(int32 Type, float param1);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneNumResetSteps(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneGoalStrengthScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicBoneAirResistance(float airResistance);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyTransform(EPolarisBodyTransformState State, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveExtraItemActorFromSlotName(const FName& SlotName, bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestoreMaterial(int32 _ItemPos, int32 _AccNum, UMeshComponent* SourceMeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMPC(int32 PlayerNo);
    
    UFUNCTION(BlueprintCallable)
    void ResetDynamics();
    
    UFUNCTION(BlueprintCallable)
    void ResetCloth();
    
    UFUNCTION(BlueprintCallable)
    void ReOffsetForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip);
    
    UFUNCTION(BlueprintCallable)
    void ReOffsetDependencyMeshForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip, int32 dependency_mesh_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseBakeTmpData(UItemPrefab* SourceItemPrefab, const TArray<UMeshComponent*>& SourceMeshCompArray, bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReBakeInitialize(int32 _ItemPos, int32 _AccNum, UItemPrefab* _SourceItemPrefab);
    
    UFUNCTION(BlueprintCallable)
    void ReAbilityOffsetForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip);
    
    UFUNCTION(BlueprintCallable)
    void ReAbilityOffsetDependencyMeshForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip, int32 dependency_mesh_index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneEndEffect(FEventOnZoneEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneEnd(FEventOnZoneEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnZoneBeginEffect(FEventOnZoneBeginEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onZoneBeginCutInEnd(FEventOnZoneBeginCutInEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWarpEndEffect(FEventOnWarpEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWarpBeginEffect(FEventOnWarpBeginEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSweatAnimation(float DeltaTime, float StopSweat_A_L, float StopSweat_B_L, float StopSweat_A_R, float StopSweat_B_R);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMotionLevelSequence(FEventOnStopMotionLevelSequenceParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnAfter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetCameraCheck(FEventOnSetCameraCheckParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetPlayerPhysics(FEventOnResetPlayerPhysicsParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetCharacterDynamicBone(FEventOnResetCharacterDynamicBoneParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadItemStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReloadItemEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageStateChanged(FEventOnRageStateChangedParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageAttackEnd(FEventOnRageAttackEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageAttackBegin(FEventOnRageAttackBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRageArtsPreAttackHit(FEventOnRageArtsPreAttackHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPowerCrashEnd(FEventOnPowerCrashEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPowerCrashBegin(FEventOnPowerCrashBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoisonDamage(FEventOnPoisonDamageParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayMotionLevelSequence(FEventOnPlayMotionLevelSequenceParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerUnEntry(FEventOnPlayerUnEntryParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMotionShift(FEventOnPlayerMotionShiftParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerEntry(FEventOnPlayerEntryParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDeActivate(FEventOnPlayerDeActivateParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerActivate(FEventOnPlayerActivateParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPetCancel(FEventOnPetCancelParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPetAnimationStart(FEventOnPetAnimationStartParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoticeBombEffectStop(FEventOnNoticeBombEffectStopParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNoticeBombEffect(FEventOnNoticeBombEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshSettingCompletedPerMesh(int32 Pos, int32 AccNum, bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshSettingCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoopPointFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemOnDamagedEvent(FEventOnItemOnDamagedEventParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCreateCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattleReset(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHeatEffect(FEventOnHeatEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGuardDamage(FEventOnGuardDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGenericItemEvent(FEventOnGenericItemEventParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFresnelEndEffect(FEventOnFresnelEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFresnelBeginEffect(FEventOnFresnelBeginEffectParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnForceUpdateActorLocation(FEventOnForceUpdateActorLocationParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceSuntanFlag(FEventOnForceSuntanFlagParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnEvaluteLiveLinkMotion(FEventOnEvaluteLiveLinkMotionParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndOverlapCameraCheck(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndDecideAnimationFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDown(FEventOnDownParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDevilEndEffect(FEventOnDevilEndEffectParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterMeshPartsOn(FEventOnCharacterMeshPartsOnParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterMeshPartsOff(FEventOnCharacterMeshPartsOffParam Param);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSweatWetDirtyRatio(FEventOnChangeSweatWetDirtyRatioParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeCharacterColorEnd(FEventOnChangeCharacterColorEndParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeCharacterColorBegin(FEventOnChangeCharacterColorBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOverlapCameraCheck(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBakeCompletedPerMesh(int32 Pos, int32 AccNum, bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBakeCompleted(bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void onArmorSucceeded(FEventOnArmorSucceededParam Param);
    
    UFUNCTION(BlueprintCallable)
    void MeshPartsOnFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer);
    
    UFUNCTION(BlueprintCallable)
    void MeshPartsOffFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCustomizeSetForDemo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPracticeDeku();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMotheadEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtraItemPos(int32 _Pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipHoodRemoveItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitLoadOldDemoActorForDemo(APolarisDemoCharacterActor* _SourceOldDemoCharacterActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitLoadCustomizeSetForDemo(UCustomizeSet* _SourceCustomizeSet, const TArray<UItemPrefab*>& _SourceItemPrefabArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeComponentsForBP(UItemPrefab* source_ip, int32 Pos, int32 AccNum, int32 DepNum, UCatwalkClothCollisionAsset* cloth_collision, UCatwalkClothCollisionAsset* cloth_collision_attachment, UCatwalkClothOverride* cloth_override, const TArray<UGFurAsset*>& GFurAssetArray, USkeletalMeshComponent* SourceSkeletalMeshComp, bool IsInitializeVisibility, AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FWeaponBoneName GetWeaponBoneName(EPolarisTracePartsId parts_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisTraceComponent* GetTraceComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlaveMeshSetStruct2(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos, int32 acc_num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetSlaveDependencyMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 Num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetResourcesNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerControlYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPetAnimMaxFrame(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetPetAnimFrame(int32 no);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* GetMissileFromTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    APolarisCharacterMissile* GetMissileFromMissileInstanceIndex(int32 _index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPositionFromShortPosNameForBP(const FString& _shortName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemPositionFromIPForBP(TSoftObjectPtr<UItemPrefab> _ip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemActorHolder(int32 Pos, int32 acc_num, FItemActorHolder& item_actor_holder) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHPPercentage();
    
private:
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetFaceSkinMaterial();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APolarisItemBaseActor* GetExpItemActorFromSlotName(const FName& SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemPositionKey> GetEnableSlaveMeshPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TMap<int32, UItemPrefab*> GetDebugMeshItemPrefabMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AnimBPType GetCurrentAnimBPType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPolarisCharacterUniqueComponent* GetCharacterUniqueComponent(int32 CompNum) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetBodyRegionMeshs(EMeshBodyRegionType bodyRegion);
    
    UFUNCTION(BlueprintCallable)
    TArray<UNiagaraComponent*> GetAuraCharacterItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetAllSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 acc_num);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetAllMeshComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllGFurComponentForBP(TArray<UGFurComponent*>& _GFurComponentArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllCatwalkClothComponentForBP(TArray<UCatwalkClothComponentBase*>& _ClothComponentArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, int32 acc_num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetAccSlaveMeshComponent(int32 acc_num) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetAccSlaveDependencyMeshComponent(int32 acc_num, int32 Num) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateHairColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugUpdateWetSweatDirt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleRestoreProcess(int32 ItemPos, int32 restoreNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleClearProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeProcess(int32 ItemPos, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePreProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData, int32 materialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePreProcess(int32 ItemPos, int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePostProcessPerMaterial(int32 materialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakePostProcess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCSBakeProcessPerMaterial(int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData, int32 materialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCSBakeProcess(int32 bakeDataNo, const FSESTBakeData& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWPProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 materialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWPProcess(int32 ItemPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWNProcessPerMaterial(int32 ItemPos, bool DependencyMesh, int32 materialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeSingleBakeCaptureUnwrapWNProcess(int32 ItemPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBakeRestoreProcess(int32 ItemPos, bool DependencyMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSESTBake(int32 ItemPos, const TArray<FSESTBakeData>& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, const TArray<UTextureRenderTarget2D*>& _CustomizeSESTData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleSCMProcess(const FMakeBakeMaterialInstanceDynamicContainer& midContainer, const FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleRTsCreateProcess(const FMakeBakeMaterialInstanceDynamicContainer& midContainer, const UMaterialInterface* SourceMeshMaterial, int32 materialIndex, UPARAM(Ref) FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleMIDsCreateProcess(FMakeBakeMaterialInstanceDynamicContainer& midContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakeForSkeletalMeshSingleBakeProcess(const FBaseMakeItemSetStruct& SourceBMI, UPARAM(Ref) FMakeBakeMaterialInstanceDynamicContainer& midContainer, UPARAM(Ref) FMakeBakeRenderingTargetsContainer& rtContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMakeForSkeletalMesh(USkeletalMeshComponent* SourceSkeletalMeshComp, const TArray<FBaseMakeItemSetStruct>& SourceBMISetArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHairForMesh(UItemPrefab* SourceItemPrefab, UMeshComponent* HairMeshComp, const TArray<UMeshComponent*>& FaceMeshCompArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateEyeForSkeletalMesh(int32 EyeNum, UBaseEyeItem* SourceBaseEyeItem, USkeletalMeshComponent* SourceSkeletalMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void CreateBodyForSkeletalMesh(USkeletalMesh* msl_mesh, USkeletalMesh* prp_mesh, USkeletalMeshComponent* SourceSkeletalMeshComp, int32 Pos, int32 PropotionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeSuntanSingle(UMeshComponent* SourceMeshComp, UMaterialInterface* SourceMeshMaterial, int32 ItemPos, int32 AccNum, bool NewIsSuntan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeSuntan(UMeshComponent* SourceMeshComp, int32 ItemPos, int32 AccNum, bool NewIsSuntan);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshWithSEST(UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, const TArray<FSESTBakeData>& SESTBakeData, const TArray<UBaseSESTItem*>& SESTItemData, int32 ItemPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshPreProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshPostProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshCreateSpecialMaterialProcess(UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, UPARAM(Ref) FAssignPerMaterialStruct& AssignPerMaterial, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshCreateGFurProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, UPARAM(Ref) FAssignPerMaterialStruct& AssignPerMaterial, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshBakeProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerPreProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, FBakeForMeshInnerProcessDataCotainer& innerDataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 AssignPerMaterialNo, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerPostProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UPARAM(Ref) FBakeForMeshInnerProcessDataCotainer& innerDataContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMeshBakeInnerMainProcess(UPARAM(Ref) FBakeForMeshPreprocessDataCotainer& dataContainer, UPARAM(Ref) FBakeForMeshInnerProcessDataCotainer& innerDataContainer, int32 midNo, UMaterialInstanceDynamic* Mid, UItemPrefab* SourceItemPrefab, int32 AssignPerMaterialNo, int32 DesignAssignArrayIndex, const FDesignAssignStruct& DesignAssignStruct, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBakeForMesh(UItemPrefab* SourceItemPrefab, UMeshComponent* SourceMeshComp, UMeshComponent* ParentMeshComp, int32 ItemPos, int32 AccNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAbilityItemIdWrapPinStruct CreateAbilityItemIdWrapPinStruct(FAbilityItemIdWrapPinStruct _Pin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSkinMaterialRefsPosBP(int32 _Pos, int32 acc_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSkinMaterialRefsBP();
    
    UFUNCTION(BlueprintCallable)
    void ClearMIDParameters(UMaterialInstanceDynamic* SourceMID);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllSlaveMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckReceivePlayerEvent(int32 player_id) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeLightingChannels(FPolarisLightingChannels lighting_channels);
    
    UFUNCTION(BlueprintCallable)
    void ChangeDynamicBoneParameters(FName VariationName, bool IsInitialize);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCollisionParameters(FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeClothParameters(FName VariationName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBodyRegionMeshVisibility(EMeshBodyRegionType bodyRegion, bool IsVisible, bool isForce);
    
    UFUNCTION(BlueprintCallable)
    void CancelMissileRequestFromTag(const FName& Tag, bool IsDestory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallReleaseTemporaryRenderTargetFromTextureName(const TArray<FString>& _TexNameArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallReleaseTemporaryRenderTargetAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateOffsetForPosition(UItemPrefab* source_ip, FTransform& outTransform, FName& outBoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateOffsetDependencyMeshForPosition(UItemPrefab* source_ip, int32 dependency_mesh_index, FTransform& outTransform, FName& outBoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateAbilityOffsetForPosition(UItemPrefab* source_ip, FTransform& outTransform, FName& outBoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateAbilityOffsetDependencyMeshForPosition(UItemPrefab* source_ip, int32 dependency_mesh_index, FTransform& outTransform, FName& outBoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySequenceWrinkleIntensities(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void AddGFurComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UGFurComponent* _GFurComponent);
    
    UFUNCTION(BlueprintCallable)
    void AddCatwalkClothComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UCatwalkClothComponentBase* _ClothComponent);
    
};

