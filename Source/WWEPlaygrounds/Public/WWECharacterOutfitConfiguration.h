#pragma once
#include "CoreMinimal.h"
#include "WWECharacterOutfitConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FWWECharacterOutfitConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Items;
    
    WWEPLAYGROUNDS_API FWWECharacterOutfitConfiguration();
};

