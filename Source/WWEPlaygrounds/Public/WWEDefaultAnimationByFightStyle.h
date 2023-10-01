#pragma once
#include "CoreMinimal.h"
#include "WWEDefaultAnimationByFightStyle.generated.h"

USTRUCT(BlueprintType)
struct FWWEDefaultAnimationByFightStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultTauntID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLoseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultWinID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultFinisherID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSignatureID;
    
    WWEPLAYGROUNDS_API FWWEDefaultAnimationByFightStyle();
};

