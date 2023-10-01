#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_CheckFightStyle.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckFightStyle : public UWWEBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEFightingStyle> FightingStyles;
    
public:
    UWWEBTDecorator_CheckFightStyle();
};

