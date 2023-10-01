#pragma once
#include "CoreMinimal.h"
#include "WWEControlComponentGameplay.h"
#include "WWEAngryRamControlComponent.generated.h"

class AWWEAngryRamCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEAngryRamControlComponent : public UWWEControlComponentGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEAngryRamCharacter* RamCharacter;
    
public:
    UWWEAngryRamControlComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestRotate(float ForcedYaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestJump();
    
};

