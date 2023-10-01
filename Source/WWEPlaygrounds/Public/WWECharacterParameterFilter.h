#pragma once
#include "CoreMinimal.h"
#include "ESBItemRarity.h"
#include "EWWEGender.h"
#include "WWECharacterParameterFilter.generated.h"

USTRUCT(BlueprintType)
struct FWWECharacterParameterFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FilterBitMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBItemRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FightingStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFavourite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CharacterSuperstarTypes;
    
    WWEPLAYGROUNDS_API FWWECharacterParameterFilter();
};

