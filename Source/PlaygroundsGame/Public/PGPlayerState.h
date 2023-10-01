#pragma once
#include "CoreMinimal.h"
#include "SBPlayerState.h"
#include "PGPlayerState.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerState : public ASBPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HumanOrderIndex, meta=(AllowPrivateAccess=true))
    int32 HumanOrderIndex;
    
public:
    APGPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HumanOrderIndex();
    
};

