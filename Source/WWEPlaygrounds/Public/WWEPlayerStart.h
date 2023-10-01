#pragma once
#include "CoreMinimal.h"
#include "PGPlayerStart.h"
#include "ESBMatchMode.h"
#include "WWEPlayerStart.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEPlayerStart : public APGPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBMatchMode> MatchModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseAsTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInsideOfRing;
    
    AWWEPlayerStart();
};

