#pragma once
#include "CoreMinimal.h"
#include "PGSaveGame.h"
#include "WWELocalData.h"
#include "WWESaveGame.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESaveGame : public UPGSaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWELocalData Data;
    
public:
    UWWESaveGame();
};

