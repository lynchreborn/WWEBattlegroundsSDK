#pragma once
#include "CoreMinimal.h"
#include "PGEditableArenaConfig.h"
#include "AsyncLoadProcessData.generated.h"

class UPGArenaEditActionBase;
class UWorld;

USTRUCT(BlueprintType)
struct FAsyncLoadProcessData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGEditableArenaConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGArenaEditActionBase*> ArenaEditActionsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UPGArenaEditActionBase*> ArenaEditActionsToApply;
    
    WWEPLAYGROUNDS_API FAsyncLoadProcessData();
};

