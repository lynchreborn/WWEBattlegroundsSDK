#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBMaterialButtonEffect.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBMaterialButtonEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EffectPaused;
    
    ASBMaterialButtonEffect();
};

