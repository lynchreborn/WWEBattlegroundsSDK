#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWEPlayScreen.generated.h"

class USBMenuGrid;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* Grid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* ElementToFocus;
    
public:
    UWWEPlayScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCrossplayWarningClosed(ESBMessageBoxClosingReason Reason);
    
};

