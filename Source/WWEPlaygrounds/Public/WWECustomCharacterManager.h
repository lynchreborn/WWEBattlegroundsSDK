#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWECharIDInfo.h"
#include "WWECharacterSlotsInfo.h"
#include "WWECustomCharacterManager.generated.h"

class UWWECharacterParameters;
class UWWESkillTree;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECustomCharacterManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FWWECharIDInfo> CharIdInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWESkillTree*> CharSkillTreeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UWWESkillTree*> PlayerSkillTreeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWECharacterSlotsInfo CharacterSlotsInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOnlineTitleIsBussy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentCharacterNeedsUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CharactersToUpdate;
    
public:
    UWWECustomCharacterManager();
protected:
    UFUNCTION(BlueprintCallable)
    void GetUploadedContentUrl(const FString& UploadedContent, UWWECharacterParameters* CustomCharacterParameter);
    
};

