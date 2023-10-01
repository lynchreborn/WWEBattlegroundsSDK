#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SubsystemDna.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class DNA2K_API USubsystemDna : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusDiscovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusSingleSignOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusSsoHeartBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusSsoRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusSsoLegalDocuments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusSsoAccountLinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusLicensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusTelemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusLoggedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusAccountLinked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusErrorStatus;
    
    USubsystemDna();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAccount();
    
    UFUNCTION(BlueprintCallable)
    void ResetTelemetryErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetSSOLegalDocumentsErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetSSOAccountLinkingErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetSingleSignOnErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetEntitlementsErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetDiscoveryErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void ResetCodesErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void RejectCurrentLegalDocument();
    
    UFUNCTION(BlueprintCallable)
    void RejectAllLegalDocuments();
    
    UFUNCTION(BlueprintCallable)
    void RedeemCode(const FString& CodeToRedeem);
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable)
    void Login(APlayerController* PlayerControllerToPoll);
    
    UFUNCTION(BlueprintCallable)
    void LinkAccount(const FString& username, const FString& password);
    
    UFUNCTION(BlueprintCallable)
    FString GetLicense();
    
    UFUNCTION(BlueprintCallable)
    void FetchLicenses(int32 DeviceID, const FString& DeviceName);
    
    UFUNCTION(BlueprintCallable)
    void FetchLegalDocuments();
    
    UFUNCTION(BlueprintCallable)
    void FetchEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureTelemetry();
    
    UFUNCTION(BlueprintCallable)
    void ClearLicensingResults();
    
    UFUNCTION(BlueprintCallable)
    void ClearLegalDocumentResults();
    
    UFUNCTION(BlueprintCallable)
    void ClearEntitlementResults();
    
    UFUNCTION(BlueprintCallable)
    void ClearCodeResults();
    
    UFUNCTION(BlueprintCallable)
    void ClearAccountLinkingResults();
    
    UFUNCTION(BlueprintCallable)
    void BeginDiscovery();
    
};

