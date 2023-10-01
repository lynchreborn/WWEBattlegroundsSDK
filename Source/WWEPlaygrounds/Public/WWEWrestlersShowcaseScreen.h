#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWEWrestlersShowcaseScreen.generated.h"

class USBPlatformBar;
class USBPlatformSlot;
class UWWECharacterParameters;
class UWWEFilterBar;
class UWWEWrestlersShowcaseGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersShowcaseScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEFilterBar* FilterBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersShowcaseGrid* Grid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CachedCharacterParameterToDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* DeleteCustomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* BuyCharacterButton;
    
public:
    UWWEWrestlersShowcaseScreen();
private:
    UFUNCTION(BlueprintCallable)
    void OnDeleteConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitWrestlersMenu_TransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ExitWrestlersMenu_MessageBoxClosed(ESBMessageBoxClosingReason Reason);
    
};

