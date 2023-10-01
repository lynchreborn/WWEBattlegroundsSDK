#pragma once
#include "CoreMinimal.h"
#include "EWWERopeInteractionType.h"
#include "WWERopeInteractionGrabParams.h"
#include "WWERopeInteractionSetRopeParams.h"
#include "WWERopeInteractionUnsetRopeParams.h"
#include "WWERopeInteraction.generated.h"

USTRUCT(BlueprintType)
struct FWWERopeInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWERopeInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWERopeInteractionSetRopeParams SetRopeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWERopeInteractionGrabParams GrabParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWERopeInteractionUnsetRopeParams UnsetParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
public:
    WWEPLAYGROUNDS_API FWWERopeInteraction();
};

