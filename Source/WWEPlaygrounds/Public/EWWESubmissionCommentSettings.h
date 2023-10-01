#pragma once
#include "CoreMinimal.h"
#include "EWWESubmissionCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWESubmissionCommentSettings : uint8 {
    Start,
    OffensiveSuccess,
    DefenderSuccess,
    StartSubmissionWithEnding,
    COUNT,
};

