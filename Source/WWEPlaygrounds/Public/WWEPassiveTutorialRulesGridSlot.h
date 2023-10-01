#pragma once
#include "CoreMinimal.h"
#include "WWEGridSlot.h"
#include "WWETutorialRulesButtonStructure.h"
#include "WWEPassiveTutorialRulesGridSlot.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPassiveTutorialRulesGridSlot : public UWWEGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETutorialRulesButtonStructure CachedTutorialButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialButtonText;
    
public:
    UWWEPassiveTutorialRulesGridSlot();
};

