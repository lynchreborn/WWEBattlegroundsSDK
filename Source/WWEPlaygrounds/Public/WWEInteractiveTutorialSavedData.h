#pragma once
#include "CoreMinimal.h"
#include "WWEInteractiveTutorialSavedData.generated.h"

USTRUCT(BlueprintType)
struct FWWEInteractiveTutorialSavedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CompletedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowedInitialMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialEnabled;
    
    WWEPLAYGROUNDS_API FWWEInteractiveTutorialSavedData();
};

