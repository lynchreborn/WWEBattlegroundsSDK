#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBBaseTransition.h"
#include "Templates/SubclassOf.h"
#include "SBFadeTransition.generated.h"

class UImage;
class USBBaseScene;
class UUserWidget;

UCLASS(Blueprintable)
class SABERGAME_API USBFadeTransition : public USBBaseTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FadeImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBBaseScene* FromScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBBaseScene* ToScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFadingIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFadingOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetFadeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fromFadeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeLerpValue;
    
public:
    USBFadeTransition();
protected:
    UFUNCTION(BlueprintCallable)
    void OpenPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeInFinished();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutPhase();
    
    UFUNCTION(BlueprintCallable)
    void FadeInPhase();
    
};

