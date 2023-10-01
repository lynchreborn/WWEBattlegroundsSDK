#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "WWECountdownSettings.generated.h"

USTRUCT(BlueprintType)
struct FWWECountdownSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SecondsToEndCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBTeam TeamAssociated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    WWEPLAYGROUNDS_API FWWECountdownSettings();
};

