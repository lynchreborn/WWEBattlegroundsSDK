#pragma once
#include "CoreMinimal.h"
#include "WWECharacterEditorCommonSlot.h"
#include "WWEHeadItemGridSlot.generated.h"

class UWWEHeadItemParameters;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHeadItemGridSlot : public UWWECharacterEditorCommonSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEHeadItemParameters* HeadItemParameters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkinColorItemId;
    
public:
    UWWEHeadItemGridSlot();
};

