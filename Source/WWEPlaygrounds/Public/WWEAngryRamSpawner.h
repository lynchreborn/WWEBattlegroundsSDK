#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "WWEAngryRamSpawner.generated.h"

class AWWEAngryRamCharacter;
class AWWEEventAngryRam;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEAngryRamSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWEAngryRamCharacter> AngryRam;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEEventAngryRam* AngryRamEvent;
    
public:
    AWWEAngryRamSpawner();
};

