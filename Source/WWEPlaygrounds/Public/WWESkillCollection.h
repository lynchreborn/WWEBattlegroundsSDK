#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWESkillCollection.generated.h"

class UWWESkillData;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESkillCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWESkillData*> SkillData;
    
    UWWESkillCollection();
};

