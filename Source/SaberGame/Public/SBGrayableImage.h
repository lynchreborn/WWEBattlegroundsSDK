#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "SBGrayableImage.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable)
class SABERGAME_API USBGrayableImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GrayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NonGrayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MyGrayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MyTexture;
    
    USBGrayableImage();
    UFUNCTION(BlueprintCallable)
    void UpdateTexture(UTexture2D* NewTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetIsGray(bool _bIsGray);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitMaterial();
    
};

