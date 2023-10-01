#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWEIngameDailyQuestPrompt.generated.h"

class UPanelWidget;
class UWWEIngameDailyQuestEntry;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEIngameDailyQuestPrompt : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* DailyQuestsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEIngameDailyQuestEntry> DailyQuestEntryClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWWEIngameDailyQuestEntry*> DailyQuestEntries;
    
public:
    UWWEIngameDailyQuestPrompt();
};

