#pragma once
#include "CoreMinimal.h"
#include "WWEArenaEditAssetsHeightBase.h"
#include "WWEArenaEditPadAction.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditPadAction : public UWWEArenaEditAssetsHeightBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PadMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PadMatRef;
    
public:
    UWWEArenaEditPadAction();
};

