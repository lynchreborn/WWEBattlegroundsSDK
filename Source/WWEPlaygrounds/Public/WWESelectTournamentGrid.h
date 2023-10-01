#pragma once
#include "CoreMinimal.h"
#include "SBPoolGrid.h"
#include "WWETournamentData.h"
#include "WWESelectTournamentGrid.generated.h"

class UWWESelectTournamentScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWESelectTournamentGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWETournamentData> CachedTournaments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWESelectTournamentScreen* SelectTournamentScreen;
    
public:
    UWWESelectTournamentGrid();
};

