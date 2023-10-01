#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "WWEMatchConfigFactory.generated.h"

class UWWEMatchConfigData;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEMatchConfigFactory : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWWEMatchConfigData>> MatchMenuConfigCollection;
    
public:
    UWWEMatchConfigFactory();
};

