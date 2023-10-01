#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWEVertexColorBodyPart.h"
#include "WWEAnimNotify_VertexColorToCheck.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_VertexColorToCheck : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ColorToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEVertexColorBodyPart BodyPart;
    
public:
    UWWEAnimNotify_VertexColorToCheck();
};

