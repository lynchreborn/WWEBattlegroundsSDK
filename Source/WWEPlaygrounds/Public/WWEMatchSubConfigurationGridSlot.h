#pragma once
#include "CoreMinimal.h"
#include "SBAlbumScreen.h"
#include "EConfigurationMode.h"
#include "WWEMatchSubConfigurationGridSlot.generated.h"

class USBPlatformBar;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchSubConfigurationGridSlot : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtons;
    
public:
    UWWEMatchSubConfigurationGridSlot();
protected:
    UFUNCTION()
    void UpdateConfigurationMode(EConfigurationMode Mode);
    
};

