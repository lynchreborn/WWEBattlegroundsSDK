#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialInfoPopup.generated.h"

UENUM(BlueprintType)
enum class EWWETutorialInfoPopup : uint8 {
    Welcome,
    Superstars,
    Store,
    CharacterCreator,
    ModifyCharacter,
    ArenaCreator,
    DailyChallenges,
    Campaign,
    Tournament,
    KOTR,
    Challenge,
    SkillTree,
    PowerUps,
    Exhibition,
    Dungeon,
    Ingame,
    OneVersusOne,
    TagTeam,
    TornadoTag,
    TripleThreat,
    Fatal4Way,
    RoyalRumble,
    KingOfTheRing,
    SteelCage1vs1,
    SteelCage2vs2,
    Gauntlet,
    Lobby,
    COUNT,
};

