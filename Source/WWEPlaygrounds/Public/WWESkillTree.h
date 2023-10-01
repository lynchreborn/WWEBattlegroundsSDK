#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWESkillSlot.h"
#include "WWESkillTree.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESkillTree : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkillSlot> SkillTreeAtackSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkillSlot> SkillTreeDefenseSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkillSlot> SkillTreeCharismaSlots;
    
    UWWESkillTree();
};

