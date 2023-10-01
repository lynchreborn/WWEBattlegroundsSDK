#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceTags.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSBLevelSequenceTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    SABERGAME_API FSBLevelSequenceTags();
};

