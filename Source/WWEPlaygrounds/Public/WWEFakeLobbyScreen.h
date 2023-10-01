#pragma once
#include "CoreMinimal.h"
#include "SBAlbumScreen.h"
#include "WWEFakeLobbyScreen.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFakeLobbyScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlockMap;
    
public:
    UWWEFakeLobbyScreen();
};

