#pragma once
#include "CoreMinimal.h"
#include "SBBasicPoolGridSlot.h"
#include "SBDebugBasicPoolGridSlot.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBDebugBasicPoolGridSlot : public USBBasicPoolGridSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GridPosText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DataIndexText;
    
public:
    USBDebugBasicPoolGridSlot();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(bool bInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter(bool bInit);
    
};

