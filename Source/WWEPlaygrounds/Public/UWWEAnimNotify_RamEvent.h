#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWERamAnimNotify.h"
#include "UWWEAnimNotify_RamEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UUWWEAnimNotify_RamEvent : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWERamAnimNotify Type;
    
public:
    UUWWEAnimNotify_RamEvent();
};

