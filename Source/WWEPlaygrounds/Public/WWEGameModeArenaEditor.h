#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "Engine/EngineTypes.h"
#include "PGGameModeArenaEditor.h"
#include "EWWEArenaSectionType.h"
#include "WWEArenaEditorSubsectionSequence.h"
#include "WWEGameModeArenaEditor.generated.h"

class ACameraActor;
class AWWEAmbienMusicActivator;
class UCurveFloat;
class UPGLevelSequencePlayerManager;
class USoundBase;
class USoundCue;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeArenaEditor : public APGGameModeArenaEditor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ArenaEditorUtilsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEArenaSectionType, FTransform> ArenaSectionsCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaEditorSubsectionSequence> ArenaSubSectionsCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> DefaultMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CameraTravelSoundCue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* DefaultMusicCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle FadeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEAmbienMusicActivator* FadeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 EditableArenaSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPGLevelSequencePlayerManager* LevelSequencePlayerManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption InterpolationFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpolationCustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PreviewTravelTransformCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* EditorCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTraveling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTravelingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTransform DestinationTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTransform OriginTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTransform StartCameraTransform;
    
public:
    AWWEGameModeArenaEditor();
protected:
    UFUNCTION(BlueprintCallable)
    void FadeInSlotSelectionScreenMusic();
    
};

