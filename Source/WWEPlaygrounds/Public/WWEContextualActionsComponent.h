#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WWEContextualActionsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEContextualActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAllActions;
    
    UWWEContextualActionsComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePossibleActions();
    
};

