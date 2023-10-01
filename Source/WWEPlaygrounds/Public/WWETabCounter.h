#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWETabCounter.generated.h"

class UPanelWidget;
class UWWESelectionLayout;
class UWWETabCounterIndicator;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWETabCounter : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWETabCounterIndicator> TabIndicatorArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivatedButtonsAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* InnerPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWETabCounterIndicator*> TabIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWESelectionLayout* SelectionLayout;
    
public:
    UWWETabCounter();
};

