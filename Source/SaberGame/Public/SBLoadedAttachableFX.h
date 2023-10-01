#pragma once
#include "CoreMinimal.h"
#include "SBBaseAttachableFX.h"
#include "SBLoadedAttachableFX.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct SABERGAME_API FSBLoadedAttachableFX : public FSBBaseAttachableFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PSTemplate;
    
    FSBLoadedAttachableFX();
};

