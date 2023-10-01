#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyPowerUpDescriptionBox.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyPowerUpDescriptionBox : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PowerUpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PowerUpDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
public:
    UWWELobbyPowerUpDescriptionBox();
    
    // Fix for true pure virtual functions not being implemented
};

