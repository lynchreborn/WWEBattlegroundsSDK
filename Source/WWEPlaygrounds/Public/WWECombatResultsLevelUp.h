#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWECombatResultsLevelUp.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsLevelUp : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelUp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LevelUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DissapearAnim;
    
public:
    UWWECombatResultsLevelUp();
    UFUNCTION(BlueprintCallable)
    void PlayLevelUpAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndedLevelUpAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void DissmissLevelUpWidget();
    
};

