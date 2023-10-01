#pragma once
#include "CoreMinimal.h"
#include "SBButton.h"
#include "SBPoolGridSlot.h"
#include "SBPoolGridSlotInfo.h"
#include "SBButtonPoolGridSlot.generated.h"

class USBPoolGrid;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBButtonPoolGridSlot : public USBButton, public ISBPoolGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName PressActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBPoolGrid* OwnerGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FSBPoolGridSlotInfo MyActiveInfo;
    
public:
    USBButtonPoolGridSlot();
    
    // Fix for true pure virtual functions not being implemented
};

