#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyOutfitsLabel.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyOutfitsLabel : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
public:
    UWWELobbyOutfitsLabel();
    
    // Fix for true pure virtual functions not being implemented
};

