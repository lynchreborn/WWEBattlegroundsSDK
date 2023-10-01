#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWESkillExtraExperience.generated.h"

class UImage;
class USBStylizedText;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWESkillExtraExperience : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ExperienceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AddXPAnim;
    
public:
    UWWESkillExtraExperience();
    UFUNCTION(BlueprintCallable)
    void ShowExperience();
    
    UFUNCTION(BlueprintCallable)
    void ShowAndAddExperience();
    
    UFUNCTION(BlueprintCallable)
    void SetExperienceNumber(int32 Experience);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndAnimationFinish();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddExperience();
    
};

