#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWEGameModeSelectionScreen.generated.h"

class USBMenuGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEGameModeSelectionScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* Grid;
    
public:
    UWWEGameModeSelectionScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
};

