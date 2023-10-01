#pragma once
#include "CoreMinimal.h"
#include "SBHISMCrowdManager.h"
#include "WWEHISMCrowdManager.generated.h"

class UWWECrowdChantComponent;
class UWWECrowdVertexAnimationComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEHISMCrowdManager : public ASBHISMCrowdManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECrowdChantComponent* CrowdChantComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECrowdVertexAnimationComponent* CrowdVertexAnimationComponent;
    
public:
    AWWEHISMCrowdManager();
};

