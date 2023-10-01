#pragma once
#include "CoreMinimal.h"
#include "EWWEGender.h"
#include "WWEFilterBarOptionButton.h"
#include "WWEFilterBarOptionButtonGender.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButtonGender : public UWWEFilterBarOptionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender Gender;
    
public:
    UWWEFilterBarOptionButtonGender();
};

