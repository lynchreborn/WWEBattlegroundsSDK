#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWWECustomImageDigitsType.h"
#include "WWECustomImageDigits.h"
#include "WWECustomImageNumberStyle.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECustomImageNumberStyle : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWECustomImageDigits> Style;
    
public:
    UWWECustomImageNumberStyle();
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetDigitFromType(EWWECustomImageDigitsType Type, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetDigitBackgroundFromType(EWWECustomImageDigitsType Type, int32 Number);
    
};

