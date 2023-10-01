#pragma once
#include "CoreMinimal.h"
#include "ESBProgressBarState.h"
#include "OnFillingBarFinishedDelegate.h"
#include "SBProgressBarFillAnimationData.h"
#include "SBUserWidget.h"
#include "SBProgressBar.generated.h"

class UAudioComponent;
class UCurveFloat;
class UImage;
class UObject;
class UProgressBar;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBProgressBar : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFillingBarFinished OnFillingBarFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ProgressBarImageWhenIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ProgressBarImageWhenFilling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FillingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FillAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, float> ProgressBarSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FSBProgressBarFillAnimationData FillAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BorderImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float TargetPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESBProgressBarState CurrentProgressBarState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayEndSoundOnFillFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FillingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EndFillingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* FillingAudio;
    
public:
    USBProgressBar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipFillAnimationBlueprintEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SkipFillAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetPercentageWithSpeed(const float NewPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetPercentage(const float NewPercent, const float FillAnimationDesiredDurationInSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBProgressBarState GetProgressBarState() const;
    
};

