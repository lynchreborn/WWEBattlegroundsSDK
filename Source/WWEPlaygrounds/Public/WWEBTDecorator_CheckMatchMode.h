#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_CheckMatchMode.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckMatchMode : public UWWEBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBMatchMode> MatchModes;
    
public:
    UWWEBTDecorator_CheckMatchMode();
};

