#pragma once
#include "CoreMinimal.h"
#include "SBMenuGridElement.h"
#include "EWWEGender.h"
#include "WWEGenderElement.generated.h"

class USBGrayableImage;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEGenderElement : public USBMenuGridElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender CharacterGender;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* SelectedCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnPressedCachedSoundCue;
    
public:
    UWWEGenderElement();
};

