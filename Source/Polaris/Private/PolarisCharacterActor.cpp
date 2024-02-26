#include "PolarisCharacterActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/ChildActorComponent.h"
#include "PolarisMasterSkeletalMeshComponent.h"

APolarisCharacterActor::APolarisCharacterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->MergedMesh_tempolary = NULL;
    this->PredictBakeCost = 0;
    this->BakeCostThreshold = -1;
    this->FighterId = 0;
    this->PlayerNumber = -1;
    this->BaseRY = 0.00f;
    this->FacingDir = 0.00f;
    this->PlayerMyGameDeltaTime = 1.00f;
    this->PlayerFrameSpeed = 1.00f;
    this->PlayerMotionFrame = 0.00f;
    this->IsCrouching = false;
    this->IsCharging = false;
    this->UseBattleAnimBP = NULL;
    this->UseWaitAnimBP = NULL;
    this->SupportUEAnimationOverride = ESupportUEAnimationMode::None;
    this->UseSkeleton = NULL;
    this->DynamicBoneParamAsset = NULL;
    this->SkeletonMirrorAsset = NULL;
    this->JiggleParamAsset = NULL;
    this->JointGenderMatching = false;
    this->IsDisableMouse = false;
    this->JiggleEnvelope = 1.00f;
    this->IsPauseDynamics = false;
    this->IsPauseDynamicsForSequencer = false;
    this->ActorVisible = true;
    this->WrinkleComponent = NULL;
    this->UseCharacterEffectManagerBP = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->CapsuleComponent2 = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent2"));
    this->CameraCheck = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CameraCheck"));
    this->BoundsRadius = 75.00f;
    this->BoundsHalfHeight = 150.00f;
    this->MasterMesh = CreateDefaultSubobject<UPolarisMasterSkeletalMeshComponent>(TEXT("MasterMesh"));
    this->SkinType = ESkinType::E_SkinType_Default;
    this->IsSuntan = false;
    this->TintColorOverlaySuntanRatio = 0.50f;
    this->MissileManagerComponent = NULL;
    this->WazaManagerComponent = NULL;
    this->FacialBlend = 0.00f;
    this->IsCustomizeMode = false;
    this->DynamicBoneNumResetSteps = 0;
    this->IsEnableClothSimulation = true;
    this->IsForceDisableClothSimulation = false;
    this->LastClothVariationName = TEXT("v0");
    this->LastCollisionVariationName = TEXT("v0");
    this->ClothRootMotionBone = TEXT("rot");
    this->ForceClothNormalSpeed = false;
    this->CwcTimeDilationForSequencer = 0.00f;
    this->CwcNumStepsToBlendFromBindPose = 0;
    this->SweatBlend = 0.00f;
    this->Wetness = 0.00f;
    this->DirtyBlend = 0.00f;
    this->IsUseAutomaticMPCSetting = false;
    this->IsRebakeEnable = false;
    this->IsUseSequenceWrinkleIntensities = false;
    this->SequenceWrinkleIntensity01R = 0.00f;
    this->SequenceWrinkleIntensity02G = 0.00f;
    this->SequenceWrinkleIntensity03B = 0.00f;
    this->SequenceWrinkleIntensity04C = 0.00f;
    this->SequenceWrinkleIntensity05M = 0.00f;
    this->SequenceWrinkleIntensity06Y = 0.00f;
    this->IsUseSequenceScalarParameters = false;
    this->SequenceScalarParameter0Value = 0.00f;
    this->SequenceScalarParameter1Value = 0.00f;
    this->BodySplitType = EBodySplitType::E_BodySplitType_None;
    this->ItemOffsetSlotData = NULL;
    this->OptionalPhysicsAsset = NULL;
    this->RageArtsUIAsset = NULL;
    this->RageArtsUI = NULL;
    this->SoundPosActor_Head = CreateDefaultSubobject<UChildActorComponent>(TEXT("SoundPosActor_Head"));
    this->SoundPosActor_Trans = CreateDefaultSubobject<UChildActorComponent>(TEXT("SoundPosActor_Trans"));
    this->isDemo = false;
    this->MasterMesh->SetupAttachment(RootComponent);
}

APolarisCharacterMissile* APolarisCharacterActor::SpawnMissileRequestFromTag(const FName& Tag, int32 MissileHandle, int32 InstanceIndex, FVector SpawnLocation, FRotator SpawnRotation) {
    return NULL;
}

void APolarisCharacterActor::SlaveMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip, bool _isAttachMasterMesh) {
}

void APolarisCharacterActor::SetWorkParamIForDrama(int32 Index, int32 Value) {
}

void APolarisCharacterActor::SetWeaponMeshVisibleAll(int32 vis_flag, bool isForce) {
}

void APolarisCharacterActor::SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce) {
}

void APolarisCharacterActor::SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce) {
}

void APolarisCharacterActor::SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce) {
}

void APolarisCharacterActor::SetUpSkin(ESkinType _skintype) {
}

void APolarisCharacterActor::SetSkeletonToMeshMergeParameters(USkeleton* Skeleton) {
}



void APolarisCharacterActor::SetNumStepsToSettleAfterReset(int32 Num) {
}

void APolarisCharacterActor::SetNumStepsToBlendFromBindPose(int32 Num) {
}

void APolarisCharacterActor::SetMirrorData() {
}

void APolarisCharacterActor::SetMirror(bool bMirror) {
}

void APolarisCharacterActor::SetJiggleEnvelope(float Envelope) {
}

void APolarisCharacterActor::SetFaceState(int32 Type, float param1) {
}

void APolarisCharacterActor::SetDynamicBoneNumResetSteps(int32 Num) {
}

void APolarisCharacterActor::SetDynamicBoneGoalStrengthScale(float Scale) {
}

void APolarisCharacterActor::SetDynamicBoneAirResistance(float airResistance) {
}

void APolarisCharacterActor::SetBodyTransform(EPolarisBodyTransformState State, bool isForce) {
}

void APolarisCharacterActor::SetActiveExtraItemActorFromSlotName(const FName& SlotName, bool IsActive) {
}



void APolarisCharacterActor::ResetDynamics() {
}

void APolarisCharacterActor::ResetCloth() {
}

void APolarisCharacterActor::ReOffsetForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip) {
}

void APolarisCharacterActor::ReOffsetDependencyMeshForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip, int32 dependency_mesh_index) {
}



void APolarisCharacterActor::ReAbilityOffsetForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip) {
}

void APolarisCharacterActor::ReAbilityOffsetDependencyMeshForPositionCore(UMeshComponent* mesh_comp, UItemPrefab* source_ip, int32 dependency_mesh_index) {
}

void APolarisCharacterActor::OnZoneEndEffect_Implementation(FEventOnZoneEndEffectParam Param) {
}

void APolarisCharacterActor::OnZoneEnd_Implementation(FEventOnZoneEndParam Param) {
}

void APolarisCharacterActor::OnZoneBeginEffect_Implementation(FEventOnZoneBeginEffectParam Param) {
}

void APolarisCharacterActor::onZoneBeginCutInEnd_Implementation(FEventOnZoneBeginCutInEndParam Param) {
}

void APolarisCharacterActor::OnWarpEndEffect_Implementation(FEventOnWarpEndEffectParam Param) {
}

void APolarisCharacterActor::OnWarpBeginEffect_Implementation(FEventOnWarpBeginEffectParam Param) {
}

void APolarisCharacterActor::OnUpdateVisibility_Implementation() {
}


void APolarisCharacterActor::OnStopMotionLevelSequence(FEventOnStopMotionLevelSequenceParam Param) {
}


void APolarisCharacterActor::OnSetCameraCheck_Implementation(FEventOnSetCameraCheckParam Param) {
}

void APolarisCharacterActor::OnResetPlayerPhysics_Implementation(FEventOnResetPlayerPhysicsParam Param) {
}

void APolarisCharacterActor::OnResetCharacterDynamicBone_Implementation(FEventOnResetCharacterDynamicBoneParam Param) {
}

void APolarisCharacterActor::OnReloadItemStart_Implementation() {
}

void APolarisCharacterActor::OnReloadItemEnd_Implementation() {
}

void APolarisCharacterActor::onRageStateChanged_Implementation(FEventOnRageStateChangedParam Param) {
}

void APolarisCharacterActor::onRageAttackEnd_Implementation(FEventOnRageAttackEndParam Param) {
}

void APolarisCharacterActor::onRageAttackBegin_Implementation(FEventOnRageAttackBeginParam Param) {
}

void APolarisCharacterActor::OnRageArtsPreAttackHit_Implementation(FEventOnRageArtsPreAttackHitParam Param) {
}

void APolarisCharacterActor::onRageArtsEnd_Implementation(FEventOnRageArtsEndParam Param) {
}

void APolarisCharacterActor::onRageArtsBegin_Implementation(FEventOnRageArtsBeginParam Param) {
}

void APolarisCharacterActor::OnPreInitBattle_Implementation() {
}

void APolarisCharacterActor::OnPowerCrashEnd_Implementation(FEventOnPowerCrashEndParam Param) {
}

void APolarisCharacterActor::OnPowerCrashBegin_Implementation(FEventOnPowerCrashBeginParam Param) {
}

void APolarisCharacterActor::OnPoisonDamage_Implementation(FEventOnPoisonDamageParam Param) {
}

void APolarisCharacterActor::OnPlayMotionLevelSequence(FEventOnPlayMotionLevelSequenceParam Param) {
}

void APolarisCharacterActor::OnPlayerUnEntry(FEventOnPlayerUnEntryParam Param) {
}

void APolarisCharacterActor::OnPlayerMotionShift(FEventOnPlayerMotionShiftParam Param) {
}

void APolarisCharacterActor::OnPlayerEntry(FEventOnPlayerEntryParam Param) {
}

void APolarisCharacterActor::OnPlayerDeActivate(FEventOnPlayerDeActivateParam Param) {
}

void APolarisCharacterActor::OnPlayerActivate(FEventOnPlayerActivateParam Param) {
}


void APolarisCharacterActor::OnPetAnimationStart_Implementation(FEventOnPetAnimationStartParam Param) {
}

void APolarisCharacterActor::OnNoticeBombEffectStop_Implementation(FEventOnNoticeBombEffectStopParam Param) {
}

void APolarisCharacterActor::OnNoticeBombEffect_Implementation(FEventOnNoticeBombEffectParam Param) {
}



void APolarisCharacterActor::OnLoopPointFrame_Implementation() {
}

void APolarisCharacterActor::OnKO_Implementation(FEventOnKOParam Param) {
}

void APolarisCharacterActor::OnItemOnDamagedEvent_Implementation(FEventOnItemOnDamagedEventParam Param) {
}


void APolarisCharacterActor::OnInitBattleReset_Implementation(FEventOnInitBattleParam Param) {
}

void APolarisCharacterActor::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}

void APolarisCharacterActor::OnHeatEffect_Implementation(FEventOnHeatEffectParam Param) {
}

void APolarisCharacterActor::OnGuardDamage_Implementation(FEventOnGuardDamageParam Param) {
}

void APolarisCharacterActor::OnGenericItemEvent_Implementation(FEventOnGenericItemEventParam Param) {
}

void APolarisCharacterActor::OnFresnelEndEffect_Implementation(FEventOnFresnelEndEffectParam Param) {
}

void APolarisCharacterActor::OnFresnelBeginEffect_Implementation(FEventOnFresnelBeginEffectParam Param) {
}

void APolarisCharacterActor::OnForceUpdateActorLocation(FEventOnForceUpdateActorLocationParam Param) {
}

void APolarisCharacterActor::OnForceSuntanFlag_Implementation(FEventOnForceSuntanFlagParam Param) {
}

void APolarisCharacterActor::OnEvaluteLiveLinkMotion(FEventOnEvaluteLiveLinkMotionParam Param) {
}

void APolarisCharacterActor::OnEndOverlapCameraCheck_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APolarisCharacterActor::OnEndDecideAnimationFrame_Implementation() {
}

void APolarisCharacterActor::OnDown_Implementation(FEventOnDownParam Param) {
}

void APolarisCharacterActor::OnDevilEndEffect_Implementation(FEventOnDevilEndEffectParam Param) {
}

void APolarisCharacterActor::onCriticalHit_Implementation(FEventOnCriticalHitParam Param) {
}

void APolarisCharacterActor::OnCharacterMeshPartsOn_Implementation(FEventOnCharacterMeshPartsOnParam Param) {
}

void APolarisCharacterActor::OnCharacterMeshPartsOff_Implementation(FEventOnCharacterMeshPartsOffParam Param) {
}

void APolarisCharacterActor::OnChangeSweatWetDirtyRatio(FEventOnChangeSweatWetDirtyRatioParam Param) {
}

void APolarisCharacterActor::OnChangeCharacterColorEnd_Implementation(FEventOnChangeCharacterColorEndParam Param) {
}

void APolarisCharacterActor::OnChangeCharacterColorBegin_Implementation(FEventOnChangeCharacterColorBeginParam Param) {
}

void APolarisCharacterActor::OnBeginOverlapCameraCheck_Implementation(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void APolarisCharacterActor::onArmorSucceeded_Implementation(FEventOnArmorSucceededParam Param) {
}

void APolarisCharacterActor::MeshPartsOnFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer) {
}

void APolarisCharacterActor::MeshPartsOffFromSequencer(int32 mesh_num, ULevelSequencePlayer* SourcePlayer) {
}


bool APolarisCharacterActor::IsPracticeDeku() {
    return false;
}

bool APolarisCharacterActor::IsMotheadEnable() const {
    return false;
}

bool APolarisCharacterActor::IsExtraItemPos(int32 _Pos) const {
    return false;
}

bool APolarisCharacterActor::IsEquipHoodRemoveItem() {
    return false;
}






void APolarisCharacterActor::GetSlaveMeshSetStruct2(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos, int32 acc_num) const {
}

void APolarisCharacterActor::GetSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, FItemPositionWrapPinStruct ItemPos) const {
}

UMeshComponent* APolarisCharacterActor::GetSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos) const {
    return NULL;
}

UMeshComponent* APolarisCharacterActor::GetSlaveDependencyMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 Num) const {
    return NULL;
}


float APolarisCharacterActor::GetPlayerControlYaw() const {
    return 0.0f;
}



APolarisCharacterMissile* APolarisCharacterActor::GetMissileFromTag(const FName& Tag) {
    return NULL;
}

APolarisCharacterMissile* APolarisCharacterActor::GetMissileFromMissileInstanceIndex(int32 _index) {
    return NULL;
}

USkeletalMeshComponent* APolarisCharacterActor::GetMeshComponent() const {
    return NULL;
}

int32 APolarisCharacterActor::GetItemPositionFromShortPosNameForBP(const FString& _shortName) {
    return 0;
}

int32 APolarisCharacterActor::GetItemPositionFromIPForBP(TSoftObjectPtr<UItemPrefab> _ip) {
    return 0;
}

void APolarisCharacterActor::GetItemActorHolder(int32 Pos, int32 acc_num, FItemActorHolder& item_actor_holder) const {
}

int32 APolarisCharacterActor::GetHPPercentage() {
    return 0;
}

UMaterialInterface* APolarisCharacterActor::GetFaceSkinMaterial() {
    return NULL;
}

APolarisItemBaseActor* APolarisCharacterActor::GetExpItemActorFromSlotName(const FName& SlotName) const {
    return NULL;
}

TArray<FItemPositionKey> APolarisCharacterActor::GetEnableSlaveMeshPosition() const {
    return TArray<FItemPositionKey>();
}


AnimBPType APolarisCharacterActor::GetCurrentAnimBPType() const {
    return AnimBPType::AnimBP_Mothead;
}

UPolarisCharacterUniqueComponent* APolarisCharacterActor::GetCharacterUniqueComponent(int32 CompNum) const {
    return NULL;
}

TArray<UMeshComponent*> APolarisCharacterActor::GetBodyRegionMeshs(EMeshBodyRegionType bodyRegion) {
    return TArray<UMeshComponent*>();
}

TArray<UNiagaraComponent*> APolarisCharacterActor::GetAuraCharacterItems() {
    return TArray<UNiagaraComponent*>();
}

TArray<UMeshComponent*> APolarisCharacterActor::GetAllSlaveMeshComponent(FItemPositionWrapPinStruct ItemPos, int32 acc_num) {
    return TArray<UMeshComponent*>();
}

TArray<UMeshComponent*> APolarisCharacterActor::GetAllMeshComponent() {
    return TArray<UMeshComponent*>();
}

void APolarisCharacterActor::GetAllGFurComponentForBP(TArray<UGFurComponent*>& _GFurComponentArray) {
}

void APolarisCharacterActor::GetAllCatwalkClothComponentForBP(TArray<UCatwalkClothComponentBase*>& _ClothComponentArray) {
}

void APolarisCharacterActor::GetAccSlaveMeshSetStruct(FSlaveMeshSetStruct& InStruct, int32 acc_num) const {
}

UMeshComponent* APolarisCharacterActor::GetAccSlaveMeshComponent(int32 acc_num) const {
    return NULL;
}

UMeshComponent* APolarisCharacterActor::GetAccSlaveDependencyMeshComponent(int32 acc_num, int32 Num) const {
    return NULL;
}

void APolarisCharacterActor::GenerateHairColor() {
}
























void APolarisCharacterActor::CreateBodyForSkeletalMesh(USkeletalMesh* msl_mesh, USkeletalMesh* prp_mesh, USkeletalMeshComponent* SourceSkeletalMeshComp, int32 Pos, int32 PropotionType) {
}













FAbilityItemIdWrapPinStruct APolarisCharacterActor::CreateAbilityItemIdWrapPinStruct(FAbilityItemIdWrapPinStruct _Pin) const {
    return FAbilityItemIdWrapPinStruct{};
}



void APolarisCharacterActor::ClearMIDParameters(UMaterialInstanceDynamic* SourceMID) {
}

void APolarisCharacterActor::ClearAllSlaveMesh() {
}

bool APolarisCharacterActor::CheckReceivePlayerEvent(int32 player_id) const {
    return false;
}

void APolarisCharacterActor::ChangeLightingChannels(FPolarisLightingChannels lighting_channels) {
}

void APolarisCharacterActor::ChangeDynamicBoneParameters(FName VariationName, bool IsInitialize) {
}

void APolarisCharacterActor::ChangeCollisionParameters(FName VariationName) {
}

void APolarisCharacterActor::ChangeClothParameters(FName VariationName) {
}

void APolarisCharacterActor::ChangeBodyRegionMeshVisibility(EMeshBodyRegionType bodyRegion, bool IsVisible, bool isForce) {
}

void APolarisCharacterActor::CancelMissileRequestFromTag(const FName& Tag, bool IsDestory) {
}



void APolarisCharacterActor::CalculateOffsetForPosition(UItemPrefab* source_ip, FTransform& outTransform, FName& outBoneName) const {
}

void APolarisCharacterActor::CalculateOffsetDependencyMeshForPosition(UItemPrefab* source_ip, int32 dependency_mesh_index, FTransform& outTransform, FName& outBoneName) const {
}

void APolarisCharacterActor::CalculateAbilityOffsetForPosition(UItemPrefab* source_ip, FTransform& outTransform, FName& outBoneName) const {
}

void APolarisCharacterActor::CalculateAbilityOffsetDependencyMeshForPosition(UItemPrefab* source_ip, int32 dependency_mesh_index, FTransform& outTransform, FName& outBoneName) const {
}

void APolarisCharacterActor::ApplySequenceWrinkleIntensities(bool bForce) {
}

void APolarisCharacterActor::AddGFurComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UGFurComponent* _GFurComponent) {
}

void APolarisCharacterActor::AddCatwalkClothComponent(int32 _Pos, int32 _AccNum, int32 _DepNum, UCatwalkClothComponentBase* _ClothComponent) {
}


