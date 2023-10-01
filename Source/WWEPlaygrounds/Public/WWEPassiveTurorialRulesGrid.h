#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWETutorialRulesButtonStructure.h"
#include "WWEPassiveTurorialRulesGrid.generated.h"

class UImage;
class UWWERulesInfoSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPassiveTurorialRulesGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialRulesButtonStructure> TutorialGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWERulesInfoSlot* RulesInfoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxScrollPositionY;
    
public:
    UWWEPassiveTurorialRulesGrid();
};

