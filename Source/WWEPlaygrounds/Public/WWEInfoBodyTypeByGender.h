#pragma once
#include "CoreMinimal.h"
#include "EWWEGender.h"
#include "WWEInfoBodyType.h"
#include "WWEInfoBodyTypeByGender.generated.h"

USTRUCT(BlueprintType)
struct FWWEInfoBodyTypeByGender {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender CharacterGender;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEInfoBodyType CharacterBodyType[6];
    
    WWEPLAYGROUNDS_API FWWEInfoBodyTypeByGender();
};

