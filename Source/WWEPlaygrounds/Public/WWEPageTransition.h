#pragma once
#include "CoreMinimal.h"
#include "SBBaseTransition.h"
#include "WWEPageTransition.generated.h"

class USBBaseScene;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEPageTransition : public USBBaseTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* FromScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* ToScene;
    
    UWWEPageTransition();
protected:
    UFUNCTION(BlueprintCallable)
    void TOutUnloadFrom();
    
    UFUNCTION(BlueprintCallable)
    void TOutOpenTo();
    
    UFUNCTION(BlueprintCallable)
    void TOutCloseFrom();
    
    UFUNCTION(BlueprintCallable)
    void TInUnloadFrom();
    
};

