#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "WWEFilterBarOptionButton.h"
#include "WWEFilterBarOptionButtonFStyle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButtonFStyle : public UWWEFilterBarOptionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightingStyle;
    
public:
    UWWEFilterBarOptionButtonFStyle();
};

