#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBAccessorToAnimInstanceInterface.h"
#include "SBCharacter.h"
#include "SBSoundLibraryContainerInterface.h"
#include "SBXPEarnedInterface.h"
#include "PGAssetLoadInterface.h"
#include "PGReadyToPlayInterface.h"
#include "Templates/SubclassOf.h"
#include "PGCharacter.generated.h"

class UPGCharacterParameters;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGCharacter : public ASBCharacter, public ISBSoundLibraryContainerInterface, public ISBXPEarnedInterface, public ISBAccessorToAnimInstanceInterface, public IPGAssetLoadInterface, public IPGReadyToPlayInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainSkeletalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExperienceEarned, meta=(AllowPrivateAccess=true))
    int32 ExperienceEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGCharacterParameters> CharacterParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGCharacterParameters* CharacterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadCharacterSynchronously;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterInstanceLevel;
    
public:
    APGCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExperienceEarned(int32 PrevExp);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeleportTo(const FVector& DestLocation, const FRotator& DestRotation);
    
    
    // Fix for true pure virtual functions not being implemented
};

