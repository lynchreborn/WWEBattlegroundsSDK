#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWELobbyFightingStyleBox.generated.h"

class UWWELobbyStandaloneButton;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyFightingStyleBox : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyStandaloneButton* FightingStyleBox;
    
public:
    UWWELobbyFightingStyleBox();
};

