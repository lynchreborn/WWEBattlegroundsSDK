#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGLevelSequencePlayerInfo.h"
#include "PGLevelSequencePlayerManager.generated.h"

class ULevelSequencePlayer;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGLevelSequencePlayerManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGLevelSequencePlayerInfo CurrentLevelSequencePlayerInfo;
    
public:
    UPGLevelSequencePlayerManager();
};

