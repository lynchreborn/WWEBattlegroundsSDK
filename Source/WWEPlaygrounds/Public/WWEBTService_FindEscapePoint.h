#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "WWEBTService_FindEscapePoint.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTService_FindEscapePoint : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumIteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UWWEBTService_FindEscapePoint();
};

