#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBMatchMode.h"
#include "WWECommentatorManager.generated.h"

class UAudioComponent;
class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECommentatorManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECommentSettings* CurrentComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECommentSettings* EnqueuedComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESBMatchMode CachedMatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedCurrentArenaMapId;
    
public:
    AWWECommentatorManager();
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSoundEnd();
    
};

