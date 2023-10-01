#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "WWEPowerUpItemEntry.h"
#include "WWEUnlockedPowerUpItem.h"
#include "WWEDefaultContentPowerUps.generated.h"

class UWWEPowerUpBase;
class UWWEPowerUpItemCollection;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentPowerUps : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPowerUpItemCollection> InitialPowerUpItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPowerUpItemCollection> CompletePowerUpItemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEPowerUpItemEntry> AvailablePowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedPowerUpItem> InitialUnlockedPowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEPowerUpBase*> PowerUpItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEPowerUpBase*> InitialPowerUpItems;
    
public:
    UWWEDefaultContentPowerUps();
};

