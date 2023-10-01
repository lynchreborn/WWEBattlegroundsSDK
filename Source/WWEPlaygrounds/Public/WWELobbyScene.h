#pragma once
#include "CoreMinimal.h"
#include "SBWidgetScene.h"
#include "WWELobbyScene.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWELobbyScene : public USBWidgetScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanConfigure;
    
    UWWELobbyScene();
};

