#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.h"
#include "EWWEFightingStyle.h"
#include "EWWEGender.h"
#include "WWEDefaultAnimationByFightStyle.h"
#include "WWEDefaultCharacterByGender.generated.h"

USTRUCT(BlueprintType)
struct FWWEDefaultCharacterByGender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HeadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HairID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EyesID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeethID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkinColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGCharacterBody BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightingStyle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultAnimationByFightStyle DefaultAnimationByFightStyle[5];
    
    WWEPLAYGROUNDS_API FWWEDefaultCharacterByGender();
};

