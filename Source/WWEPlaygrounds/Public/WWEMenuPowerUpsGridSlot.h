#pragma once
#include "CoreMinimal.h"
#include "WWEGridSlot.h"
#include "WWEMenuPowerUpsGridSlot.generated.h"

class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMenuPowerUpsGridSlot : public UWWEGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* UnselectedSound;
    
public:
    UWWEMenuPowerUpsGridSlot();
};

