#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ClimbElectrocuted.generated.h"

class UAudioComponent;
class USBSoundLibrary;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ClimbElectrocuted : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinElectrocutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxElectrocutionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBSoundLibrary> SoundLibraryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ElectrocutionSoundComponent;
    
public:
    UWWEAction_ClimbElectrocuted();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFinishElectrocution();
    
};

