#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "EWWEUserProgressionCondition.h"
#include "Templates/SubclassOf.h"
#include "WWEHUDActionTooltipParams.h"
#include "WWEHUDActionsTooltip.generated.h"

class UVerticalBox;
class UWWEHUDActionsTooltipSlot;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDActionsTooltip : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEHUDActionsTooltipSlot> SlotClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ActionsTooltipsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* CharismaActionsTooltipsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SwapSlotsAnim;
    
public:
    UWWEHUDActionsTooltip();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateTooltipsFromCharismaComponent(bool bDidCharismaChange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCharismaTooltipAnimation(EWWEUserProgressionCondition Condition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTooltipsBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void SetTooltips(TArray<FWWEHUDActionTooltipParams> Actions);
    
};

