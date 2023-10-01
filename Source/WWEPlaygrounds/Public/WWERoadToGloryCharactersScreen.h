#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "WWEWrestlersMainScreen.h"
#include "WWERoadToGloryCharactersScreen.generated.h"

class USBPlatformSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERoadToGloryCharactersScreen : public UWWEWrestlersMainScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* PlayBattlegroundChallengeButton;
    
public:
    UWWERoadToGloryCharactersScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void NoCharacterCloseMessage(ESBMessageBoxClosingReason Reason);
    
};

