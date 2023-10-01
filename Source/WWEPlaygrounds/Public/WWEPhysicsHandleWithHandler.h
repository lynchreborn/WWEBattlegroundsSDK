#pragma once
#include "CoreMinimal.h"
#include "WWEPhysicsHandleWithHandler.generated.h"

class UPhysicsHandleComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FWWEPhysicsHandleWithHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* PhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SocketHandlerName;
    
    WWEPLAYGROUNDS_API FWWEPhysicsHandleWithHandler();
};

