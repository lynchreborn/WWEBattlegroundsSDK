#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WWEEditableArenaParallaxName.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEEditableArenaParallaxName : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ArenaNameText;
    
public:
    UWWEEditableArenaParallaxName();
};

