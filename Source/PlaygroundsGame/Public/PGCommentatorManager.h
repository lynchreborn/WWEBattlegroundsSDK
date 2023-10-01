#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PGCommentID.h"
#include "PGCommentatorManager.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGCommentatorManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGCommentID CurrentCommentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGCommentID EnqueuedCommentID;
    
public:
    APGCommentatorManager();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSoundEnd();
    
    UFUNCTION(BlueprintCallable)
    void DelayedPlay(FPGCommentID CommentID);
    
};

