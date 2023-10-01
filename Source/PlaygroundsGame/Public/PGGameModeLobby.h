#pragma once
#include "CoreMinimal.h"
#include "SBGameModeLobby.h"
#include "PGGameModeLobby.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API APGGameModeLobby : public ASBGameModeLobby {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBalanceVersionSynced;
    
public:
    APGGameModeLobby();
protected:
    UFUNCTION(BlueprintCallable)
    void CountdownConfiguringMatch();
    
};

