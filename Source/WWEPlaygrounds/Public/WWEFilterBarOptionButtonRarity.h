#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarity.h"
#include "WWEFilterBarOptionButton.h"
#include "WWEFilterBarOptionButtonRarity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButtonRarity : public UWWEFilterBarOptionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBItemRarity Rarity;
    
public:
    UWWEFilterBarOptionButtonRarity();
};

