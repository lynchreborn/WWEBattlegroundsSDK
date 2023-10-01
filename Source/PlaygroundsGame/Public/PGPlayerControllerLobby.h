#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipDivisionLevel.h"
#include "EPGChampionshipLeague.h"
#include "PGPlayerController.h"
#include "PGSyncSaveData.h"
#include "PGPlayerControllerLobby.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerControllerLobby : public APGPlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReadyToSyncInitialData, meta=(AllowPrivateAccess=true))
    bool bReadyToSyncInitialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReadyToConfigure, meta=(AllowPrivateAccess=true))
    bool bReadyToConfigure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReadyToSyncFinalData, meta=(AllowPrivateAccess=true))
    bool bReadyToSyncFinalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReadyToTravel, meta=(AllowPrivateAccess=true))
    bool bReadyToTravel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> LocalUnlockedArenas;
    
    APGPlayerControllerLobby();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToTravel(bool bNewReadyToTravel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToSyncInitialData(bool bNewReadyToSyncInitialData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToSyncFinalData(bool bNewReadyToSyncFinalData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReadyToConfigure(bool bNewReadyToConfigure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLobbySlotStatus(const TArray<int32>& SlotIndexArray, const TArray<FString>& LobbySlotsRawDataArray);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetChampionshipInfo(EPGChampionshipLeague League, uint8 Prestige, EPGChampionshipDivisionLevel DivisionLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendPGRepSaveData(const FPGSyncSaveData& RepSaveData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyBalanceVersion(int32 Version, bool bUpdated);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyToTravel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyToSyncInitialData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyToSyncFinalData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReadyToConfigure();
    
};

