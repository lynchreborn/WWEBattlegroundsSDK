#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWWEHeadType.h"
#include "WWEItemHeadMeshConfig.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEItemHeadMeshConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> FallbackMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Meshes[12];
    
public:
    UWWEItemHeadMeshConfig();
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<USkeletalMesh> GetMeshByType(EWWEHeadType HeadType) const;
    
};

