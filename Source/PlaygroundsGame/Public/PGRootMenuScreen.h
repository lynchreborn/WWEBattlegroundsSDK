#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBRootMenuGridWidget.h"
#include "PGRootMenuScreen.generated.h"

class USBMainMenuGrid;
class USBPlatformBar;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGRootMenuScreen : public USBRootMenuGridWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* BottomButtonsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* BottomButtonsRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMainMenuGrid* RootMenuGrid;
    
public:
    UPGRootMenuScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmationWantQuitGameMsgClosed(ESBMessageBoxClosingReason Cause);
    
};

