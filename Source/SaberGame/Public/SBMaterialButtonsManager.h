#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBMaterialButtonEffectInfo.h"
#include "SBMaterialButtonsManager.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBMaterialButtonsManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBMaterialButtonEffectInfo> ButtonsInfo;
    
    ASBMaterialButtonsManager();
};

