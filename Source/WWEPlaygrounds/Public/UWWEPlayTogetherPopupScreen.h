#pragma once
#include "CoreMinimal.h"
#include "SBPopupWidget.h"
#include "UWWEPlayTogetherPopupScreen.generated.h"

class UWWEOptionSelector;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UUWWEPlayTogetherPopupScreen : public USBPopupWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* Selector_NumberOfPlayers;
    
public:
    UUWWEPlayTogetherPopupScreen();
};

