#pragma once
#include "CoreMinimal.h"
#include "ENakamaGroupState.h"
#include "NakamaGroup.h"
#include "NakamaUserGroup.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaUserGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaGroup Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaGroupState State;
    
    FNakamaUserGroup();
};

