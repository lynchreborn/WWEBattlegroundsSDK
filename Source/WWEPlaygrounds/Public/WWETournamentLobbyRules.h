#pragma once
#include "CoreMinimal.h"
#include "SaberJsonSerializable.h"
#include "EWWECharacterSuperstarType.h"
#include "EWWEFightingStyle.h"
#include "EWWEGender.h"
#include "WWETournamentLobbyRules.generated.h"

USTRUCT(BlueprintType)
struct FWWETournamentLobbyRules : public FSaberJsonSerializable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEGender AllowedGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEFightingStyle> AllowedFightingStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWECharacterSuperstarType> AllowedCharacterTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 AllowedArena;
    
    WWEPLAYGROUNDS_API FWWETournamentLobbyRules();
};

