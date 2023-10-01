#pragma once
#include "CoreMinimal.h"
#include "WWEArenaEditAssetsHeightBase.h"
#include "WWEArenaEditRopeAction.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditRopeAction : public UWWEArenaEditAssetsHeightBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> RopeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RopeMatRef;
    
public:
    UWWEArenaEditRopeAction();
};

