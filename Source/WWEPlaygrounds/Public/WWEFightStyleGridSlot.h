#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEInfoFightStyle.h"
#include "WWEFightStyleGridSlot.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFightStyleGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWEInfoFightStyle CharacterFightStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CachedIconImageIcon;
    
public:
    UWWEFightStyleGridSlot();
    UFUNCTION(BlueprintCallable)
    void Load(bool bLoadSynchronously);
    
};

