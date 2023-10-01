#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "ExtCharacter.generated.h"

UCLASS(Blueprintable)
class MIRRORANIMATIONSYSTEM_API AExtCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AExtCharacter();
    UFUNCTION(BlueprintCallable)
    void SetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis::Type> MirrorAxis, TEnumAsByte<EAxis::Type> FlipAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorRootMotion(bool Mirror);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis::Type>& MirrorAxis, TEnumAsByte<EAxis::Type>& FlipAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMirrorRootMotion();
    
};

