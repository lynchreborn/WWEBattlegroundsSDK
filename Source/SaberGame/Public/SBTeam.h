#pragma once
#include "CoreMinimal.h"
#include "SBTeam.generated.h"

class ASBCharacter;

USTRUCT(BlueprintType)
struct FSBTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBCharacter*> members;
    
    SABERGAME_API FSBTeam();
};

