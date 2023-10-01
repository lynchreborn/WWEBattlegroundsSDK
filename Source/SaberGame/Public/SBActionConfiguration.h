#pragma once
#include "CoreMinimal.h"
#include "SBGamepadKey.h"
#include "SBKeyboardKey.h"
#include "SBActionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FSBActionConfiguration {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBGamepadKey DisplayedGamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBKeyboardKey> DisplayedKeyboardKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBGamepadKey> AlternativeGamepadKeys;
    
public:
    SABERGAME_API FSBActionConfiguration();
};

