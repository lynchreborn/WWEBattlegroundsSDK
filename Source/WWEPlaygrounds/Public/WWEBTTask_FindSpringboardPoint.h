#pragma once
#include "CoreMinimal.h"
#include "WWEBTTask_FindClosestExitRing.h"
#include "WWEBTTask_FindSpringboardPoint.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_FindSpringboardPoint : public UWWEBTTask_FindClosestExitRing {
    GENERATED_BODY()
public:
    UWWEBTTask_FindSpringboardPoint();
};

