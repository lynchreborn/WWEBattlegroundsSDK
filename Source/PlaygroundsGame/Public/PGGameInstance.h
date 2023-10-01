#pragma once
#include "CoreMinimal.h"
#include "SBGameInstance.h"
#include "PGDailyQuestsSystemInfo.h"
#include "PGSanitizePlayerNameRequest.h"
#include "PGGameInstance.generated.h"

class ISBItemParametersInterface;
class USBItemParametersInterface;
class UPGOnlineGameShop;
class UPGSeasonManager;

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API UPGGameInstance : public USBGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PendingPresenceCheckRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingLocalDailyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGDailyQuestsSystemInfo DailyQuestsSystemInfo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldInfoFolder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldInfoFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerWorldInfoFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BalancePatchFileBackendFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BalancePatchFileNameTemplate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BalancePatchSaveGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginCredentialsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatformLoginSuccessful;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockSaveData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bExtraSavingPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCouldNotLoadSaveData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInSecondsToUpdateWorldInfoInServer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireOnlineSignInToPlay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOnlineSignInErrors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAllowLoginWithOnlineSubsystemNull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyReachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGSeasonManager* _CachedSeasonManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivePlayerIsLogginOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGOnlineGameShop* OnlineGameShop;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EulaVersionFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GDPRInfoFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSanitizePlayerNameRequest> SanitizePlayerNameRequests;
    
public:
    UPGGameInstance();
    UFUNCTION(BlueprintCallable)
    void SaveGameData();
    
    UFUNCTION()
    bool PurchaseItem(TScriptInterface<ISBItemParametersInterface> ItemParams, bool bWithHardCurrency, uint32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameWillBeDeletedMsgBoxClosed();
    
    UFUNCTION(BlueprintCallable)
    void LoadGameData();
    
    UFUNCTION(BlueprintCallable)
    void InitOnlineGameShop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableClothingSimulation(bool _bEnableClothingSimulation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckPlayerNameCollissions();
    
};

