#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "WWEArenaEditBorderAction.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditBorderAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> BorderMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BorderMatRef;
    
public:
    UWWEArenaEditBorderAction();
};

