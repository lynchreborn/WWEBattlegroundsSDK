#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "EWWEDailyQuestScreenState.h"
#include "WWEPauseDailyChallengesScreen.generated.h"

class UWWEDailyQuest;
class UWWEDailyQuestInfoEntry;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPauseDailyChallengesScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEDailyQuest*> StoredDailyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEDailyQuestInfoEntry*> DailyQuestInfoEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot3;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDailyQuestScreenState State;
    
public:
    UWWEPauseDailyChallengesScreen();
};

