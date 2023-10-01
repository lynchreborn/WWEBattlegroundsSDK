#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/EngineTypes.h"
#include "SBHUD.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API ASBHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugDisplayCycleCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> DebugDisplayCompatibleClasses;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 CurrentDebugDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ShowDebugTargetActorByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ShowLabelTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedShowDebugActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShowSafeZone;
    
    ASBHUD();
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugForActorByName(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowDebugCycleDisplay();
    
};

