#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBGameModeMainMenu.h"
#include "PGLoadRenderLevelRequest.h"
#include "PGGameModeMainMenu.generated.h"

class ALight;
class APGLevelTextureRenderManager;
class APGSceneCapture2D;
class ASkeletalMeshActor;
class ASkyLight;

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API APGGameModeMainMenu : public ASBGameModeMainMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGSceneCapture2D*> CharactersCameraCaptureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGSceneCapture2D*> CameraCaptureToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ASkeletalMeshActor*> SpawnPointsForRenderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALight*> MenuLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASkyLight*> MenuSkyLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    APGLevelTextureRenderManager* LevelTextureRenderManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGLoadRenderLevelRequest> LoadRenderLevelRequestList;
    
public:
    APGGameModeMainMenu();
    UFUNCTION(BlueprintCallable)
    void OnApplyAddonsConfirmationClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void DisableMenuLights();
    
};

