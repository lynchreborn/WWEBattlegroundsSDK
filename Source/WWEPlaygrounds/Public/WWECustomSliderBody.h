#pragma once
#include "CoreMinimal.h"
#include "SBButton.h"
#include "EWWEBodySliderType.h"
#include "WWECustomSliderBody.generated.h"

class USBGrayableImage;
class USlider;
class USoundCue;
class UTextBlock;
class UWWECharacterEditorStepBody;
class UWWESkinItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECustomSliderBody : public USBButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBGrayableImage* Unselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStepBody* Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* CustSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* EditableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEBodySliderType BodySliderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAnalogMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWESkinItemParameters*> SkinItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentAnalogMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnNavigatedMorpherSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BodyItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanShowId;
    
public:
    UWWECustomSliderBody();
};

