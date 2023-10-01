#pragma once
#include "CoreMinimal.h"
#include "SBBaseScene.h"
#include "SBLevelScene.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBLevelScene : public USBBaseScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPath;
    
    USBLevelScene();
};

