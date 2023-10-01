#pragma once
#include "CoreMinimal.h"
#include "ESBKeyboardType.h"
#include "SBKeyboardKey.generated.h"

USTRUCT(BlueprintType)
struct FSBKeyboardKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBKeyboardType KeyboardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DisplayedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AlternativeKeyboardKeys;
    
    SABERGAME_API FSBKeyboardKey();
};

