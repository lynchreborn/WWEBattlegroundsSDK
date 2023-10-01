#pragma once
#include "CoreMinimal.h"
#include "SBGameState.h"
#include "PGGameStateArenaEditor.generated.h"

class ULevelStreamingDynamic;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGGameStateArenaEditor : public ASBGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> RequiredArenaLevelsToLoad;
    
public:
    APGGameStateArenaEditor();
};

