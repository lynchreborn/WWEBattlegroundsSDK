#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PGCrowdManager.h"
#include "WWECrowdManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECrowdManager : public APGCrowdManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> DebugColors;
    
    AWWECrowdManager();
};

