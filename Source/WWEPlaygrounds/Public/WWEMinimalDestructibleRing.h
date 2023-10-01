#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EWWEDirection.h"
#include "EWWERelaxedRopeHeight.h"
#include "EWWERingPhysicsState.h"
#include "EWWERingStageHeight.h"
#include "EWWERingVertexAnimationType.h"
#include "EWWETurnbuckleLocation.h"
#include "Templates/SubclassOf.h"
#include "WWERing.h"
#include "WWERingCornerInfo.h"
#include "WWERingSkirtVertexAnimation.h"
#include "WWEMinimalDestructibleRing.generated.h"

class AActor;
class ALevelSequenceActor;
class AWWERingPostWeapon;
class ULevelSequence;
class UMaterialInstanceDynamic;
class UNavLinkCustomComponent;
class UPhysicalAnimationComponent;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USoundCue;
class UStaticMeshComponent;
class UWWECommentSettings;
class UWWERingAestheticsData;
class UWWERingPhysicsData;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEMinimalDestructibleRing : public AWWERing {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableRingDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePadsOnDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachAffectedRopesOnDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushCharactersOnDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWERingPhysicsData* NormalPhysicsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWERingPhysicsData* DestructionPhysicsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWERingPhysicsData* RelaxedPhysicsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RingDestructionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PostDestructionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DestructiblePost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWERingPostWeapon> RingPostWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToSwapPostWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWERingAestheticsData* AestheticsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavLinkCustomComponent* Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> OnDestroyCommentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWERingVertexAnimationType, FWWERingSkirtVertexAnimation> VertexAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, ULevelSequence*> SkirtsGetWeaponAnimSequences;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RingFloorComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* RingFloorInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RopesComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DestructiblePosts, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DestructiblePosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PostWeapons, meta=(AllowPrivateAccess=true))
    TArray<AWWERingPostWeapon*> PostWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWETurnbuckleLocation, FWWERingCornerInfo> CornerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, UStaticMeshComponent*> Skirts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, UMaterialInstanceDynamic*> SkirtMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* DestructionSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, ALevelSequenceActor*> SkirtGetWeaponSequenceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, EWWERelaxedRopeHeight> RopeHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, EWWERingStageHeight> StageHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> HardenRopeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAreRingAestheticsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> DestructionSequenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LinkedActorsToRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedActorsToRingTag;
    
public:
    AWWEMinimalDestructibleRing();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Test4();
    
    UFUNCTION(BlueprintCallable)
    void Test3();
    
    UFUNCTION(BlueprintCallable)
    void Test2();
    
    UFUNCTION(BlueprintCallable)
    void Test1_2();
    
    UFUNCTION(BlueprintCallable)
    void Test1();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwapPostWeapon(EWWETurnbuckleLocation Corner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetRopeHeightEvent(EWWEDirection Wall, EWWERelaxedRopeHeight Height);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetRingStageHeightEvent(EWWEDirection Wall, EWWERingStageHeight Height);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetAllRopeHeightsEvent(EWWERelaxedRopeHeight Height);
    
    UFUNCTION(BlueprintCallable)
    void OnRingDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnRightSkirtSequenceEnds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PostWeapons();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DestructiblePosts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRelaxCornerEvent(EWWETurnbuckleLocation Corner, EWWERingPhysicsState PhysicsState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRelaxAllCornersEvent(EWWERingPhysicsState PhysicsState);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftSkirtSequenceEnds();
    
    UFUNCTION(BlueprintCallable)
    void OnFrontSkirtSequenceEnds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetachRopesEvent(EWWETurnbuckleLocation Corner);
    
    UFUNCTION(BlueprintCallable)
    void OnDestructionColliderOverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDestructionColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBackSkirtSequenceEnds();
    
    UFUNCTION(BlueprintCallable)
    void OnApronColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnApronColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetAestheticsData(UWWERingAestheticsData* Data);
    
};

