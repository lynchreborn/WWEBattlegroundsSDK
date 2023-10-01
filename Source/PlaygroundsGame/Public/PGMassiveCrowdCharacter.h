#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PGMassiveCrowdCharacter.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGMassiveCrowdCharacter : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedStaticMeshComp;
    
public:
    APGMassiveCrowdCharacter();
};

