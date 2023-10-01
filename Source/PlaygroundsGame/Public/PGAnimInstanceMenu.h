#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PGAnimInstanceMenu.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API UPGAnimInstanceMenu : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharacterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimStartTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RenderActionID;
    
public:
    UPGAnimInstanceMenu();
    UFUNCTION(BlueprintCallable)
    void SetRenderActionName(const FName& RenderActionName);
    
    UFUNCTION(BlueprintCallable)
    FName GetRenderActionName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetRenderActionID();
    
};

