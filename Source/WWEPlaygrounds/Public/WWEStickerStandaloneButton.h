#pragma once
#include "CoreMinimal.h"
#include "SBStandaloneButton.h"
#include "SBTransitionableElement.h"
#include "WWEStickerStandaloneButton.generated.h"

class UMaterialInstanceDynamic;
class URetainerBox;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEStickerStandaloneButton : public USBStandaloneButton, public ISBTransitionableElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* Retainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RetainerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* TransitionInAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_StickerInitialFold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_StickerTargetFold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_StickerAnimationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_CurrentStickerAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTemp_Animating;
    
public:
    UWWEStickerStandaloneButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartStickerMaterialAnimation(float StickerTargetFold, float StickerAnimationDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeStickerMaterialAnimation(float StickerInitialFold, float StickerAngle);
    
    
    // Fix for true pure virtual functions not being implemented
};

