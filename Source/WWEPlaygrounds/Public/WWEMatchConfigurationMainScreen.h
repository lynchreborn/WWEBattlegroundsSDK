#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "SBAlbumScreen.h"
#include "WWEMatchConfigurationMainScreen.generated.h"

class USBMenuGrid;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchConfigurationMainScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* GridMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBMatchMode> AllowedMatchs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* ElementToFocus;
    
public:
    UWWEMatchConfigurationMainScreen();
};

