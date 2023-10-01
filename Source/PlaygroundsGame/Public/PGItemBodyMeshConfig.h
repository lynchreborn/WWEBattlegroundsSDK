#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPGCharacterBody.h"
#include "PGItemBodyMeshConfig.generated.h"

class UDataTable;
class USkeletalMesh;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGItemBodyMeshConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FallbackMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Meshes[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> LobbyFallbackMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> LobbyMeshes[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BodyPartsOccluded;
    
public:
    UPGItemBodyMeshConfig();
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<USkeletalMesh> GetMeshByType(EPGCharacterBody Body, bool bForUseInLobby) const;
    
};

