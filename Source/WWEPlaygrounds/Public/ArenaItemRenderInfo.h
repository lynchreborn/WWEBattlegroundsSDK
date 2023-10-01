#pragma once
#include "CoreMinimal.h"
#include "ArenaItemRenderInfo.generated.h"

class ASceneCapture2D;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FArenaItemRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasToBeRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialInstance;
    
    WWEPLAYGROUNDS_API FArenaItemRenderInfo();
};

