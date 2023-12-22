#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbySkeletalMeshMergeParams.h"
#include "LobbyMeshMergeFunctionLibrary.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class POLARIS_API ULobbyMeshMergeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULobbyMeshMergeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FLobbySkeletalMeshMergeParams& Params, TArray<USkeletalMesh*> MeshesToMerge);
    
};

