#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "SBTeamTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSBTeamTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBTeam Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SABERGAME_API FSBTeamTypeName();
};

