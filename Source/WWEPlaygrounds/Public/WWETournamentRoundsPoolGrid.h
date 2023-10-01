#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ScrollBox.h"
#include "Templates/SubclassOf.h"
#include "WWEProgressionReward.h"
#include "WWETournamentRoundsPoolGrid.generated.h"

class UWWETournamentRoundsPoolGridSlot;
class UWWETournamentScreen;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWETournamentRoundsPoolGrid : public UScrollBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWETournamentRoundsPoolGridSlot> NormalRoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWETournamentRoundsPoolGridSlot> FinalRoundClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfElementsOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEProgressionReward TestObjectReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfElementsOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 ScrollOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ScrollTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWETournamentScreen* TournamentScreen;
    
public:
    UWWETournamentRoundsPoolGrid();
protected:
    UFUNCTION(BlueprintCallable)
    void ScrollCenter();
    
    UFUNCTION(BlueprintCallable)
    void Scroll();
    
};

