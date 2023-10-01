#pragma once
#include "CoreMinimal.h"
#include "SBBaseAttachableFX.h"
#include "SBSoftAttachableFX.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SABERGAME_API FSBSoftAttachableFX : public FSBBaseAttachableFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> PSTemplate;
    
    FSBSoftAttachableFX();
};

