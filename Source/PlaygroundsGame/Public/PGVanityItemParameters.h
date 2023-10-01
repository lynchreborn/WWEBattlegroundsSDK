#pragma once
#include "CoreMinimal.h"
#include "SBItemParameters.h"
#include "Templates/SubclassOf.h"
#include "PGVanityItemParameters.generated.h"

class UPGItemBodyMeshConfig;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGVanityItemParameters : public USBItemParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VanityItemIDList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGItemBodyMeshConfig> MeshBodyConfig;
    
public:
    UPGVanityItemParameters();
};

