#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPGCharacterBody.h"
#include "PGDefaultContentCharacters.h"
#include "EWWEGender.h"
#include "Templates/SubclassOf.h"
#include "WWEAliasInfo.h"
#include "WWECharacterTextureMaps.h"
#include "WWEDefaultCharacterByGender.h"
#include "WWEInfoBodyTypeByGender.h"
#include "WWEInfoFightStyle.h"
#include "WWEMorpherInfo.h"
#include "WWESkinRenderProcessInfo.h"
#include "WWEUnlockedCharacter.h"
#include "WWEDefaultContentCharacters.generated.h"

class UMaterialInstance;
class USBSoundLibrary;
class USkeletalMesh;
class UWWECharacterParameters;
class UWWECharacterParametersStats;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentCharacters : public UPGDefaultContentCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOfShortestFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOfTallestFighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBodyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBodyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOffsetKneesOnTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOffsetKneesOnTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinNeckScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxNeckScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHeadScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeadScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScaledPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScaledPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedCharacterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedCharacterVelocityNear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultEntranceBoxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkinRenderProcessInfo> SkinRenderProcessInfoSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrowdTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdSupportTotalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBSoundLibrary> FemaleCustomCharacterSoundLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBSoundLibrary> MaleCustomCharacterSoundLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* InvisibleMaterialsForPhysics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWECharacterParameters*> InitialCharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWECharacterParameters*> CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedCharacter> InitialUnlockedCharacters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FinalSkinMaterial[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterEditorRTSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayRTSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEInfoFightStyle CharacterFightStyle[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEInfoBodyTypeByGender CharacterBodyTypeByGender[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEMorpherInfo> CharacterMorphers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEAliasInfo> CustomCharacterAliasInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultCharacterByGender DefaultCharacterByGender[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWECharacterParametersStats> StatsByFightingStyle[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWECharacterParameters> CharacterParamsByFightingStyle[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedRatiosByFightingStyle[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfOutfitConfigurations;
    
public:
    UWWEDefaultContentCharacters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWWECharacterParameters* GetPlayerParamsByIndex(int32 _PlayerIndex, bool FromInitialCharacters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWWECharacterParameters* GetPlayerParamsByID(const FString& _PlayerID) const;
    
    UFUNCTION(BlueprintCallable)
    FWWECharacterTextureMaps GetCharacterTextureMapsByGenderAndType(EWWEGender Gender, EPGCharacterBody Body) const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<USkeletalMesh> GetCharacterMeshByGenderAndType(EWWEGender Gender, EPGCharacterBody Body) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharacterIndexByID(const FString& CharacterID) const;
    
};

