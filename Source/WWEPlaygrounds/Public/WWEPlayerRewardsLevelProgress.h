#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEPlayerRewardsLevelProgress.generated.h"

class USBStylizedText;
class UWWEWrestlersDetailsLevel;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsLevelProgress : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWrestlersDetailsLevel* UserLevelProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* CurrentUserLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* NextUserLevel;
    
public:
    UWWEPlayerRewardsLevelProgress();
    UFUNCTION(BlueprintCallable)
    void SetProgressFromUserCustomXP(float Experience);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressFromUser();
    
    UFUNCTION(BlueprintCallable)
    UWWEWrestlersDetailsLevel* GetLevelProgressBar();
    
};

