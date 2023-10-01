#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBMaterialButtonEffectInfo.generated.h"

class ASBMaterialButtonEffect;

USTRUCT(BlueprintType)
struct FSBMaterialButtonEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBMaterialButtonEffect> ButtonEffectBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ASBMaterialButtonEffect* ButtonEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonTag;
    
    SABERGAME_API FSBMaterialButtonEffectInfo();
};

