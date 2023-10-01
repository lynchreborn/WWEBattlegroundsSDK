#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "EPGMassiveCrowdAnimationType.h"
#include "PGMassiveCrowdMaterialInstance.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FPGMassiveCrowdMaterialInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAnimID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGMassiveCrowdAnimationType NextAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGMassiveCrowdAnimationType CurrentAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBTeam TeamID;
    
    PLAYGROUNDSGAME_API FPGMassiveCrowdMaterialInstance();
};

