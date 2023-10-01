#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWESequenceCheckType.h"
#include "WWECameraSequenceData.h"
#include "WWECheckPlaySequence.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWECheckPlaySequence : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWESequenceCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWECameraSequenceData> CameraSequences;
    
public:
    UWWECheckPlaySequence();
};

