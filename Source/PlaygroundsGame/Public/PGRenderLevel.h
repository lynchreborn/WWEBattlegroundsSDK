#pragma once
#include "CoreMinimal.h"
#include "PGRenderLevel.generated.h"

USTRUCT(BlueprintType)
struct FPGRenderLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Levels;
    
    PLAYGROUNDSGAME_API FPGRenderLevel();
};

