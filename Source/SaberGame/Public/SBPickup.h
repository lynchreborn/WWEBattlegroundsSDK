#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBInteractableInterface.h"
#include "SBPickup.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class SABERGAME_API ASBPickup : public AActor, public ISBInteractableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PickupMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
public:
    ASBPickup();
    UFUNCTION(BlueprintCallable)
    void WasCollected();
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bNewPickupState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetItemID() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

