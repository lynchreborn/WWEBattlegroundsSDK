#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WWEAnimInstanceBox.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEAnimInstanceBox : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectedInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SelectedMenuBoxStartingTime;
    
public:
    UWWEAnimInstanceBox();
};

