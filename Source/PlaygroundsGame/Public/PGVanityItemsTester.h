#pragma once
#include "CoreMinimal.h"
#include "SBHideMeshTester.h"
#include "EPGCharacterBody.h"
#include "PGVanityItemsTester.generated.h"

class UPGVanityItemCollection;
class UPGVanityItemParameters;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGVanityItemsTester : public ASBHideMeshTester {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGCharacterBody MeshBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HeadSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPGVanityItemParameters>> VanityItemsWithBodyPartsToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShowVanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGVanityItemCollection> VanityItemCollection;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HeadMesh;
    
public:
    APGVanityItemsTester();
};

