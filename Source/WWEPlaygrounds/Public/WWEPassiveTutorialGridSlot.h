#pragma once
#include "CoreMinimal.h"
#include "WWEGridSlot.h"
#include "WWETutorialButtonStructure.h"
#include "WWEPassiveTutorialGridSlot.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPassiveTutorialGridSlot : public UWWEGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETutorialButtonStructure CachedTutorialButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialButtonText;
    
public:
    UWWEPassiveTutorialGridSlot();
};

