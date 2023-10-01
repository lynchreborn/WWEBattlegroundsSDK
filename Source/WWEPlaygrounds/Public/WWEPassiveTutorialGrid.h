#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWETutorialButtonStructure.h"
#include "WWEPassiveTutorialGrid.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPassiveTutorialGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialButtonStructure> TutorialGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UImage* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxScrollPositionY;
    
public:
    UWWEPassiveTutorialGrid();
};

