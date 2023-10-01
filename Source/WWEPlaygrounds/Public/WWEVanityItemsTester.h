#pragma once
#include "CoreMinimal.h"
#include "PGVanityItemsTester.h"
#include "EWWEGender.h"
#include "WWEVanityItemsTester.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEVanityItemsTester : public APGVanityItemsTester {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender MeshGenderType;
    
public:
    AWWEVanityItemsTester();
};

