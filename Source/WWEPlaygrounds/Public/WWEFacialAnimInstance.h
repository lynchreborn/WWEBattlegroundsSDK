#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBFacialAnimInstance.h"
#include "EWWEFacialType.h"
#include "WWEFacialAnimInstance.generated.h"

class AWWECharacterCombat;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEFacialAnimInstance : public USBFacialAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EntranceAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleFacialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEFacialType FacialAnimationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float FacialAnimationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float FacialAnimationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float FacialAnimationAlphaTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInLobby;
    
public:
    UWWEFacialAnimInstance();
    UFUNCTION(BlueprintCallable)
    void EndFacialAnimation();
    
};

