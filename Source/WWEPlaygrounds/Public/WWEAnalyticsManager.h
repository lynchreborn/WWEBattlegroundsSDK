#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WWEAnalyticsManager.generated.h"

class UWWESubsystemDna;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAnalyticsManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWESubsystemDna* SubsystemDna;
    
public:
    UWWEAnalyticsManager();
};

