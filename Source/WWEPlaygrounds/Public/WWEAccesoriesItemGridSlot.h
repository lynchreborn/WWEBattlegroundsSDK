#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEAccesoriesItemGridSlot.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAccesoriesItemGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Description;
    
public:
    UWWEAccesoriesItemGridSlot();
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void Load(bool bLoadSynchronously);
    
};

