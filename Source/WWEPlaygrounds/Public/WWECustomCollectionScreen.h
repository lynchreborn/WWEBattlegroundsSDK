#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "WWEWrestlersMainScreen.h"
#include "WWECustomCollectionScreen.generated.h"

class UAudioComponent;
class USBPlatformSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECustomCollectionScreen : public UWWEWrestlersMainScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* AcceptCharacterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioPlayer;
    
public:
    UWWECustomCollectionScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void ReplayFighterSong();
    
    UFUNCTION(BlueprintCallable)
    void OnGetCharacterSlots(bool bWasSuccessful);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeleteErrorRestoreFocus(ESBMessageBoxClosingReason Reason);
    
};

