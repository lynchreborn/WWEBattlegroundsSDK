#pragma once
#include "CoreMinimal.h"
#include "SBDefaultContentUI.h"
#include "PGDefaultContentUI.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGDefaultContentUI : public USBDefaultContentUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ListBannedWords;
    
    UPGDefaultContentUI();
};

