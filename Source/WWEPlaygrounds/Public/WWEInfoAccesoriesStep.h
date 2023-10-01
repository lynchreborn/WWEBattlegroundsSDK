#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWWEItemCategory.h"
#include "EWWESkinItemType.h"
#include "WWEInfoAccesoriesStep.generated.h"

class UTexture2D;
class UWWEInfoAccesoriesStep;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEInfoAccesoriesStep : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEItemCategory ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWESkinItemType SkinItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SlotWidgetImageUnselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SlotWidgetImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SlotWidgetImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWEInfoAccesoriesStep*> InfoAccesoriesStep;
    
    UWWEInfoAccesoriesStep();
};

