#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/SceneCapture2D.h"
#include "PGSceneCapture2D.generated.h"

class AActor;
class ALight;
class ASkyLight;
class UPGAnimInstanceMenu;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGAnimInstanceMenu*> AnimInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PersistentActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float CachedOriginalFOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedOriginalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FRotator CachedOriginalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALight*> LightsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASkyLight*> SkylightsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bNewMapLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bKeepLightsOn;
    
public:
    APGSceneCapture2D();
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemovePersistentActor(AActor* PresestentActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPersistentActor();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetRenderTarget();
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddPersistentActor(AActor* PresestentActor);
    
};

