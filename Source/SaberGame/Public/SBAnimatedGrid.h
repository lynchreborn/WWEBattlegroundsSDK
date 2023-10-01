#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMenuGrid.h"
#include "SBTransitionableElement.h"
#include "SBAnimatedGrid.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBAnimatedGrid : public USBMenuGrid, public ISBTransitionableElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D originalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D fromPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D toPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionLerpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Transitionate;
    
public:
    USBAnimatedGrid();
protected:
    UFUNCTION(BlueprintCallable)
    void TransitionRoutine(float InDeltaTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

