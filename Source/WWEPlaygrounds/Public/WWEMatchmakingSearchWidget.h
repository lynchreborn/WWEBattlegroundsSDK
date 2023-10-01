#pragma once
#include "CoreMinimal.h"
#include "PGMatchmakingSearchWidget.h"
#include "WWEMatchmakingSearchWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class WWEPLAYGROUNDS_API UWWEMatchmakingSearchWidget : public UPGMatchmakingSearchWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalDedicatedGameLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CrossplayEnabled;
    
public:
    UWWEMatchmakingSearchWidget();
};

