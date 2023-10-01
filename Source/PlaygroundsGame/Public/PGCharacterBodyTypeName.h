#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.h"
#include "PGCharacterBodyTypeName.generated.h"

USTRUCT(BlueprintType)
struct FPGCharacterBodyTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGCharacterBody Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    PLAYGROUNDSGAME_API FPGCharacterBodyTypeName();
};

