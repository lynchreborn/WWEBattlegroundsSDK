#pragma once
#include "CoreMinimal.h"
#include "SBRepGameplayPlayerSlot.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBRepGameplayPlayerSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    FSBRepGameplayPlayerSlot();
};

