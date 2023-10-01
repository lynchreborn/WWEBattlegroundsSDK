#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBPoolGrid.h"
#include "Templates/SubclassOf.h"
#include "WWEWrestlersDetailsPoolGrid.generated.h"

class AWWEWrestlerDetailsTheatre;
class UWWECharacterParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersDetailsPoolGrid : public USBPoolGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWEWrestlerDetailsTheatre> TheatreClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TheatreSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEWrestlerDetailsTheatre* Theatre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeCharIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWECharacterParameters*> Characters;
    
public:
    UWWEWrestlersDetailsPoolGrid();
};

