#pragma once
#include "CoreMinimal.h"
#include "EWWEAnalyticsEventCategoryType.generated.h"

UENUM(BlueprintType)
enum class EWWEAnalyticsEventCategoryType : uint8 {
    Unknown,
    SessionStart,
    SessionEnd,
    GameplaySessionStart,
    GameplaySessionEnd,
    MatchStart,
    MatchEnd,
    CampaignStoryProgression,
    ArenaCreation,
    Language,
    GameSparks,
    StoreInteractions,
    Nakama,
};

