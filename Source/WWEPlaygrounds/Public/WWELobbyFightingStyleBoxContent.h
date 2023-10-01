#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbyFightingStyleBoxContent.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyFightingStyleBoxContent : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FightingStyleIcon;
    
public:
    UWWELobbyFightingStyleBoxContent();
};

