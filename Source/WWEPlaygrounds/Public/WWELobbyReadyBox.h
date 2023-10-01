#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyReadyBox.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyReadyBox : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
public:
    UWWELobbyReadyBox();
    
    // Fix for true pure virtual functions not being implemented
};

