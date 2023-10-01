#pragma once
#include "CoreMinimal.h"
#include "SBStickerMaterialGridElement.h"
#include "Templates/SubclassOf.h"
#include "WWEStickerMaterialGridElement.generated.h"

class UTexture;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEStickerMaterialGridElement : public USBStickerMaterialGridElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TextWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextTexture;
    
public:
    UWWEStickerMaterialGridElement();
};

