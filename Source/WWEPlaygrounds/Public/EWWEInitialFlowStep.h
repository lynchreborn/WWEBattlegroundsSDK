#pragma once
#include "CoreMinimal.h"
#include "EWWEInitialFlowStep.generated.h"

UENUM(BlueprintType)
enum class EWWEInitialFlowStep : uint8 {
    InitialFlow1_None,
    InitialFlow2_Welcome,
    InitialFlow3_Superstars,
    InitialFlow4_HardCoins,
    InitialFlow5_Shop,
    COUNT,
};

