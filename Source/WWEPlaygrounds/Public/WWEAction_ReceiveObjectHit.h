#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEStats.h"
#include "EWWETypeObjects.h"
#include "EWWEUserProgressionCondition.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveObjectHit.generated.h"

class AActor;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveObjectHit : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector ObjectPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWETypeObjects ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEStats CurrentStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFlyingHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWETypeObjects, EWWEUserProgressionCondition> ConditionForObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VelocityAdjustLocation;
    
public:
    UWWEAction_ReceiveObjectHit();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformActionWithCustomParameters(int32 Variation, bool bIsSignature, FVector _ObjectPosition, EWWETypeObjects _ObjectType, AActor* _Instigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPerformActionWithCustomParameters(int32 Variation, bool bIsSignature, FVector _ObjectPosition, EWWETypeObjects _ObjectType, AActor* _Instigator);
    
};

