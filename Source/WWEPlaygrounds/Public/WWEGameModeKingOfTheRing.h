#pragma once
#include "CoreMinimal.h"
#include "PendingToDestroyCharacters.h"
#include "WWEGameModeCombat.h"
#include "WWEGameModeKingOfTheRing.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeKingOfTheRing : public AWWEGameModeCombat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayersAfterStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackfillDelayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> TemporalHotJoiningPlayersToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPendingToDestroyCharacters> PendingToDestroyCharacters;
    
public:
    AWWEGameModeKingOfTheRing();
protected:
    UFUNCTION(BlueprintCallable)
    void CheckPendingToDestroyCharacters();
    
};

