#pragma once
#include "CoreMinimal.h"
#include "PGArenaEditActionBase.h"
#include "PGArenaEditLevelsActionBase.generated.h"

class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGArenaEditLevelsActionBase : public UPGArenaEditActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingCancelledLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 PendingLoadingLevels;
    
public:
    UPGArenaEditLevelsActionBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAsyncLevelsLoadingCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnAsyncLevelsLoadingCancelled();
    
};

