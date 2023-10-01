#pragma once
#include "CoreMinimal.h"
#include "WWEFilterBarOptionButton.h"
#include "WWEFilterBarOptionButtonFav.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButtonFav : public UWWEFilterBarOptionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFavourite;
    
public:
    UWWEFilterBarOptionButtonFav();
};

