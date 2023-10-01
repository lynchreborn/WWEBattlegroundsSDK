#pragma once
#include "CoreMinimal.h"
#include "ESBCompetitionMode.h"
#include "SBCompetitionModeTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSBCompetitionModeTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBCompetitionMode Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SABERGAME_API FSBCompetitionModeTypeName();
};

