#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbyCharacterGridSlotContent.generated.h"

class USBGrayableImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyCharacterGridSlotContent : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* Icon;
    
    UWWELobbyCharacterGridSlotContent();
};

