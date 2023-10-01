#pragma once
#include "CoreMinimal.h"
#include "WWEConfiguredComboActions.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEConfiguredComboActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HitIdentifier;
    
    FWWEConfiguredComboActions();
};

