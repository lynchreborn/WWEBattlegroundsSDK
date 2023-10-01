#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBCameraShakeTags.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FSBCameraShakeTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    SABERGAME_API FSBCameraShakeTags();
};

