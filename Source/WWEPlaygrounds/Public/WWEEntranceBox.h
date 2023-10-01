#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWEEntranceBox.generated.h"

class UAnimationAsset;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEEntranceBox : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AWWEEntranceBox();
    UFUNCTION(BlueprintCallable)
    void SetBoxMesh(USkeletalMesh* _Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxAnimation(UAnimationAsset* _Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlayOpenBoxAnimation();
    
};

