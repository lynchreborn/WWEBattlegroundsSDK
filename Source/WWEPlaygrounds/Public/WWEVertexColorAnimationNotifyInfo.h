#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEVertexColorBodyPart.h"
#include "WWEVertexColorAnimationNotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEVertexColorAnimationNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEVertexColorBodyPart BodyPart;
    
    WWEPLAYGROUNDS_API FWWEVertexColorAnimationNotifyInfo();
};

