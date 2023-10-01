#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWECharacterAnimNotify.h"
#include "WWEAnimNotify_CharacterEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_CharacterEvent : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECharacterAnimNotify Type;
    
public:
    UWWEAnimNotify_CharacterEvent();
};

