#pragma once
#include "CoreMinimal.h"
#include "LocalUserDelegateHandlerForSessionFound.generated.h"

class UPGCheatManager;

USTRUCT(BlueprintType)
struct FLocalUserDelegateHandlerForSessionFound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocalUserNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGCheatManager* CheatManager;
    
    PLAYGROUNDSGAME_API FLocalUserDelegateHandlerForSessionFound();
};

