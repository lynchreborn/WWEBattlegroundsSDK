#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEFilterBarOption.h"
#include "WWEFilterBarOptionButton.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBarOptionButton : public USBUserWidget, public IWWEFilterBarOption {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AppliedImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnAppliedImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AppliedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UnAppliedImage;
    
public:
    UWWEFilterBarOptionButton();
    
    // Fix for true pure virtual functions not being implemented
};

