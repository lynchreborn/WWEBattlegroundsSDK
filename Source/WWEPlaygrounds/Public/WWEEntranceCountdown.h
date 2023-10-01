#pragma once
#include "CoreMinimal.h"
#include "WWEHUDCountdown.h"
#include "WWEEntranceCountdown.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEEntranceCountdown : public UWWEHUDCountdown {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FightImage;
    
public:
    UWWEEntranceCountdown();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartCountdown(int32 InitialValue);
    
    UFUNCTION(BlueprintCallable)
    void OnEndCountdown();
    
};

