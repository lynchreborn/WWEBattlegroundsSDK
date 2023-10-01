#pragma once
#include "CoreMinimal.h"
#include "SBGamepadKey.generated.h"

USTRUCT(BlueprintType)
struct FSBGamepadKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NormalKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InverseKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SingleJoyConKey;
    
public:
    SABERGAME_API FSBGamepadKey();
};

