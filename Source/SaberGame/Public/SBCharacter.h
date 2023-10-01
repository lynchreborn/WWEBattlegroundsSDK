#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ESBTeam.h"
#include "SBTeamInterface.h"
#include "SBCharacter.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBCharacter : public ACharacter, public ISBTeamInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBTeam Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Stats, meta=(AllowPrivateAccess=true))
    TArray<int32> Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> OldStats;
    
public:
    ASBCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ESBTeam NewTeam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Stats();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBTeam GetTeam() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

