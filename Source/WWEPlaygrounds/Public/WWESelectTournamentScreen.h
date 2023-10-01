#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWESelectTournamentScreen.generated.h"

class USBPlatformBar;
class UWWESelectTournamentGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWESelectTournamentScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWESelectTournamentGrid* SelectTournamentGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
public:
    UWWESelectTournamentScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
};

