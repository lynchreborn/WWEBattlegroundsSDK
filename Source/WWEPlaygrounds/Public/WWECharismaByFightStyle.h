#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "WWECharismaByFightStyle.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWECharismaByFightStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddCharisma;
    
    FWWECharismaByFightStyle();
};

