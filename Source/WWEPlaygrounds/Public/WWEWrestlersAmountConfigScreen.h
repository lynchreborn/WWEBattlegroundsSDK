#pragma once
#include "CoreMinimal.h"
#include "SBAlbumScreen.h"
#include "WWEWrestlersAmountConfigScreen.generated.h"

class USBMenuGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersAmountConfigScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* Grid;
    
public:
    UWWEWrestlersAmountConfigScreen();
};

