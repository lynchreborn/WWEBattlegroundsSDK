#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWESkinItemGridSlot.generated.h"

class UWWESkinItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWESkinItemGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWESkinItemParameters* SkinItemParameters;
    
public:
    UWWESkinItemGridSlot();
    UFUNCTION(BlueprintCallable)
    void Load(bool bLoadSynchronously);
    
};

