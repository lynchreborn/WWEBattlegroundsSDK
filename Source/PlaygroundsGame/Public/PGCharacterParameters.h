#pragma once
#include "CoreMinimal.h"
#include "SBItemParametersAndLoader.h"
#include "EPGCharacterBody.h"
#include "PGCharacterParameters.generated.h"

class USBSoundLibrary;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGCharacterParameters : public USBItemParametersAndLoader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGCharacterBody BodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCharacterLoading: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCharacterLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCharSoundLibLoading: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBSoundLibrary> CharacterSoundLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CurrentCharacterItems;
    
    UPGCharacterParameters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetRarity() const;
    
};

