#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbySlotTextureSetDependant.h"
#include "WWELobbyCharacterNameBox.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyCharacterNameBox : public USBUserWidget, public IWWELobbySlotTextureSetDependant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CharacterNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BG;
    
public:
    UWWELobbyCharacterNameBox();
    
    // Fix for true pure virtual functions not being implemented
};

