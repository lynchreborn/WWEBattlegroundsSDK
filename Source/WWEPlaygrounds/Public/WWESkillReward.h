#pragma once
#include "CoreMinimal.h"
#include "WWEItemReward.h"
#include "WWESkillReward.generated.h"

class UWWECharacterParameters;
class UWWESkillData;

USTRUCT(BlueprintType)
struct FWWESkillReward : public FWWEItemReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWESkillData* ResourceSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    WWEPLAYGROUNDS_API FWWESkillReward();
};

