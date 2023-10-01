#pragma once
#include "CoreMinimal.h"
#include "PGGameSettings.h"
#include "EWWEGender.h"
#include "Templates/SubclassOf.h"
#include "WWEGameplayInitialSettings.h"
#include "WWEGameSettings.generated.h"

class UPGCharacterParameters;
class UWWEAIConfig;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEGameSettings : public UPGGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlaygroundsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString InviteeWaitingSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPGCharacterParameters>> RoyalRumbleCharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEAIConfig> AILevelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShowDebugHitInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEGameplayInitialSettings GameplayInitialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowSkipAllComics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSkipTutorials;
    
public:
    UWWEGameSettings();
    UFUNCTION(BlueprintCallable)
    FWWEGameplayInitialSettings GetGameplayInitialSettings() const;
    
    UFUNCTION(BlueprintCallable)
    void FillRoyalRumbleCharacterParameters(const int32 MaxIndex, EWWEGender InGender);
    
    UFUNCTION(BlueprintCallable)
    void FillCampaignCharacterParameters(TArray<FString> MatchWrestlers);
    
};

