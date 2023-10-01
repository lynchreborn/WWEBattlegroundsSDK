#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "Templates/SubclassOf.h"
#include "WWEHeightInfo.h"
#include "WWEInfoFightStyle.generated.h"

class UTexture2D;
class UWWESkillTree;

USTRUCT(BlueprintType)
struct FWWEInfoFightStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SortingTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEHeightInfo HeightInfo[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FightStyleItemWidgetImageUnselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FightStyleItemWidgetImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FightStyleItemWidgetImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWESkillTree> SkillTree;
    
    WWEPLAYGROUNDS_API FWWEInfoFightStyle();
};

