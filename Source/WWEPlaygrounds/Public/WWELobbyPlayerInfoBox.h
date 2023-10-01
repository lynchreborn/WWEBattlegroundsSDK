#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyPlayerInfoBox.generated.h"

class ASBPlayerState;
class UImage;
class UTextBlock;
class UWWELobbyControllerIcon;
class UWWEPrestigeSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyPlayerInfoBox : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UsernameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyControllerIcon* ControllerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPrestigeSlot* UserPrestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
public:
    UWWELobbyPlayerInfoBox();
    UFUNCTION(BlueprintCallable)
    void OnPlayerNicknameSanitized(ASBPlayerState* InPlayerState);
    
    
    // Fix for true pure virtual functions not being implemented
};

