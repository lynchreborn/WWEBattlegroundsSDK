#pragma once
#include "CoreMinimal.h"
#include "PGCardInfo.generated.h"

USTRUCT(BlueprintType)
struct FPGCardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueItemID;
    
    PLAYGROUNDSGAME_API FPGCardInfo();
};

