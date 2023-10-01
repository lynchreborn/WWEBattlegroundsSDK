#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialStepCompleteExtraCheck.generated.h"

UENUM(BlueprintType)
enum class EWWETutorialStepCompleteExtraCheck : uint8 {
    None,
    Hit_Punch,
    PunchComboFinish,
    Hit_Kick,
    KickComboFinish,
    Throw_Special,
    SpecialMove,
    IrishWhip,
    SuccessfulCounter,
    COUNT,
};

