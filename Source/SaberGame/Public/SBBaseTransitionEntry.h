#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBBaseTransitionEntry.generated.h"

class USBBaseTransition;

USTRUCT(BlueprintType)
struct FSBBaseTransitionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBBaseTransition> SBBaseTransitionClass;
    
    SABERGAME_API FSBBaseTransitionEntry();
};

