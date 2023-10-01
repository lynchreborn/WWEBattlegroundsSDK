#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWETournamentData.h"
#include "WWETournamentManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWETournamentManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentTournamentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bActiveTournamentsPendingToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bNextTournamentsPendingToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWETournamentData> AllTournamentsData;
    
public:
    UWWETournamentManager();
};

