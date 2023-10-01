#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterState.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_CheckCharacterState.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckCharacterState : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWECharacterState> CharacterStates;
    
public:
    UWWEBTDecorator_CheckCharacterState();
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterStateChanged(EWWECharacterState NewState);
    
};

