#pragma once
#include "CoreMinimal.h"
#include "ESBControllerTypeSource.h"
#include "SBPlatformBarSlotData.h"
#include "SBUserWidget.h"
#include "SBPlatformBar.generated.h"

class UPanelWidget;
class USBPlatformSlot;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBPlatformBar : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* PlatformSlotsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBControllerTypeSource ControllerTypeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBPlatformSlot> FallBackSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBPlatformBarSlotData> InitialPlatformSlotsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBPlatformSlot*> PlatformSlots;
    
public:
    USBPlatformBar();
    UFUNCTION(BlueprintCallable)
    USBPlatformSlot* GetPlatformSlotByName(const FName& SlotName);
    
};

