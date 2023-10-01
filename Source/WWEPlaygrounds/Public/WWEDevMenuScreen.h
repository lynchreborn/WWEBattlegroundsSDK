#pragma once
#include "CoreMinimal.h"
#include "SBAlbumScreen.h"
#include "WWEDevMenuScreen.generated.h"

class USBMenuGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEDevMenuScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* Grid;
    
public:
    UWWEDevMenuScreen();
};

