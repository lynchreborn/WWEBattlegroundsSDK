#pragma once
#include "CoreMinimal.h"
#include "WWELobbyBaseGrid.h"
#include "WWELobbyOutfitsGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyOutfitsGrid : public UWWELobbyBaseGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> AvailableOutfitIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString OutfitIDInUse;
    
public:
    UWWELobbyOutfitsGrid();
};

