#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWEEditableArenaBuilder.generated.h"

class UWWEArenaParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEEditableArenaBuilder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEArenaParameters* ArenaParameter;
    
    AWWEEditableArenaBuilder();
};

