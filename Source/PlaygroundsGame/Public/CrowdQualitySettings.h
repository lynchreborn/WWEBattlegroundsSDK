#pragma once
#include "CoreMinimal.h"
#include "CrowdQualitySettings.generated.h"

USTRUCT(BlueprintType)
struct FCrowdQualitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CapsuleDirectShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CapsuleIndirectShadows;
    
    PLAYGROUNDSGAME_API FCrowdQualitySettings();
};

