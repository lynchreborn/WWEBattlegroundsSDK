#pragma once
#include "CoreMinimal.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_ShouldSignature.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_ShouldSignature : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bChanceCheck;
    
public:
    UWWEBTDecorator_ShouldSignature();
};

