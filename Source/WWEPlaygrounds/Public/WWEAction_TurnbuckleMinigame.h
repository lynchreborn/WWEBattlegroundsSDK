#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_TurnbuckleMinigame.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_TurnbuckleMinigame : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToPushOnTurnbuckleMinigame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 InternalMaxHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bReceivedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 SoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleEndInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatEnabled;
    
public:
    UWWEAction_TurnbuckleMinigame();
protected:
    UFUNCTION(BlueprintCallable)
    void EndInputActionByTime();
    
};

