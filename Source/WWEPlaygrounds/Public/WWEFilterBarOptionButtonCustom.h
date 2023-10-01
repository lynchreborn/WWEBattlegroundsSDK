#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterSuperstarType.h"
#include "WWEFilterBarOptionButton.h"
#include "WWEFilterBarOptionButtonCustom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButtonCustom : public UWWEFilterBarOptionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECharacterSuperstarType CharacterSuperstarType;
    
public:
    UWWEFilterBarOptionButtonCustom();
};

