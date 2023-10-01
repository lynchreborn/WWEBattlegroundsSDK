#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEItemSuperstarMeshConfig.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEItemSuperstarMeshConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HairMesh;
    
    UWWEItemSuperstarMeshConfig();
};

