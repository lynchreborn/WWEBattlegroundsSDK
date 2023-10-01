#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DNAGameInstance.generated.h"

class APlayerController;

UCLASS(Blueprintable, NonTransient)
class UDNAGameInstance : public UGameInstance {
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
    
    UDNAGameInstance();
    UFUNCTION(BlueprintCallable)
    void DNAUpdate();
    
    UFUNCTION(BlueprintCallable)
    void DNAUnlinkAccount();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetTelemetryErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetSSOLegalDocumentsErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetSSOAccountLinkingErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetSingleSignOnErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetEntitlementsErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetDiscoveryErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNAResetCodesErrorStatus();
    
    UFUNCTION(BlueprintCallable)
    void DNARejectCurrentLegalDocument();
    
    UFUNCTION(BlueprintCallable)
    void DNARejectAllLegalDocuments();
    
    UFUNCTION(BlueprintCallable)
    void DNARedeemCode(const FString& CodeToRedeem);
    
    UFUNCTION(BlueprintCallable)
    void DNAQueueTelemetryEvent(int32 EventsToQueue);
    
    UFUNCTION(BlueprintCallable)
    void DNALogout();
    
    UFUNCTION(BlueprintCallable)
    void DNALogin(APlayerController* PlayerControllerToPoll);
    
    UFUNCTION(BlueprintCallable)
    void DNALinkAccount(const FString& username, const FString& password);
    
    UFUNCTION(BlueprintCallable)
    FString DNAGetLicense();
    
    UFUNCTION(BlueprintCallable)
    void DNAFetchLicenses(int32 DeviceID, const FString& DeviceName);
    
    UFUNCTION(BlueprintCallable)
    void DNAFetchLegalDocuments();
    
    UFUNCTION(BlueprintCallable)
    void DNAFetchEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void DNAEnd();
    
    UFUNCTION(BlueprintCallable)
    void DNAConfigureTelemetry();
    
    UFUNCTION(BlueprintCallable)
    void DNAClearLegalDocumentResults();
    
    UFUNCTION(BlueprintCallable)
    void DNAClearEntitlementResults();
    
    UFUNCTION(BlueprintCallable)
    void DNAClearCodeResults();
    
    UFUNCTION(BlueprintCallable)
    void DNAClearAccountLinkingResults();
    
    UFUNCTION(BlueprintCallable)
    void DNABeginDiscovery();
    
    UFUNCTION(BlueprintCallable)
    void DNABegin();
    
    UFUNCTION(BlueprintCallable)
    void ClearLicensingResults();
    
};

