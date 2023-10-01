#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "WWEBTTask_FindFurthestPoint.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_FindFurthestPoint : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumIteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UWWEBTTask_FindFurthestPoint();
};

