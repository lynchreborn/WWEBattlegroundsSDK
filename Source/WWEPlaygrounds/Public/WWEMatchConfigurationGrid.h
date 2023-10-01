#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWEMatchConfigurationGrid.generated.h"

class UImage;
class UWWEMatchConfigurationGridSlot;
class UWWEMatchConfigurationMainGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchConfigurationGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEMatchConfigurationMainGrid* ParentGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEMatchConfigurationGridSlot* ParentWidgetSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectionIndex;
    
public:
    UWWEMatchConfigurationGrid();
};

