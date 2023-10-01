#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditAssetsActionBase.h"
#include "WWEArenaEditCoverAction.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditCoverAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CoverMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CoverMatRef;
    
public:
    UWWEArenaEditCoverAction();
};

