#pragma once
#include "CoreMinimal.h"
#include "PGEditableArenaConfig.h"
#include "PGEditableArenaConfigWithOwner.generated.h"

USTRUCT(BlueprintType)
struct FPGEditableArenaConfigWithOwner : public FPGEditableArenaConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlatformUniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BackendUserId;
    
    PLAYGROUNDSGAME_API FPGEditableArenaConfigWithOwner();
};

