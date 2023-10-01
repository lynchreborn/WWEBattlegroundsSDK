#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEArenaEditAssetsSubSectionBase.h"
#include "WWEArenaEditLightingElement.h"
#include "WWEArenaEditLightingAction.generated.h"

class AWWEArenaEditorParticleManager;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditLightingAction : public UWWEArenaEditAssetsSubSectionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RampLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaEditLightingElement> RampLightElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StageLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaEditLightingElement> StageLightElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEArenaEditorParticleManager* CachedParticleManager;
    
public:
    UWWEArenaEditLightingAction();
};

