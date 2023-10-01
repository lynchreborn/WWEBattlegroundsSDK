#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaRealtimeClientRequests.generated.h"

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientRequests : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UNakamaRealtimeClientRequests();
};

