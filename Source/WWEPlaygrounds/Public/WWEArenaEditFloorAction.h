#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "WWEArenaEditFloorAction.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditFloorAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> FloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FloorMatRef;
    
public:
    UWWEArenaEditFloorAction();
};

