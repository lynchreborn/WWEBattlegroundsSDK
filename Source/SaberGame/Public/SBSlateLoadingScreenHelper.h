#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBSlateLoadingScreenHelper.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBSlateLoadingScreenHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompleteWhenLoadingCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForManualStop;
    
    USBSlateLoadingScreenHelper();
    UFUNCTION(BlueprintCallable)
    void SetupLoadingScreen(bool bSetDefault);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Configurate();
    
};

