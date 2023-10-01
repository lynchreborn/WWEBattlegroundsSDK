#pragma once
#include "CoreMinimal.h"
#include "SBMainMenuGridElement.h"
#include "SBIconGridElement.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBIconGridElement : public USBMainMenuGridElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
public:
    USBIconGridElement();
    UFUNCTION(BlueprintCallable)
    void SetIcon(UImage* Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UImage* GetIcon() const;
    
};

