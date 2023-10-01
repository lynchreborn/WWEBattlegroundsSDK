#pragma once
#include "CoreMinimal.h"
#include "SBPoolGridSlot.h"
#include "SBPoolGridSlotInfo.h"
#include "SBUserWidget.h"
#include "SBBasicPoolGridSlot.generated.h"

class USBPoolGrid;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBBasicPoolGridSlot : public USBUserWidget, public ISBPoolGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPoolGrid* OwnerGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBPoolGridSlotInfo MyActiveInfo;
    
public:
    USBBasicPoolGridSlot();
    
    // Fix for true pure virtual functions not being implemented
};

