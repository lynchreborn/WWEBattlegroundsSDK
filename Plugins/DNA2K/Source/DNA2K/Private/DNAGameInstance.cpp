#include "DNAGameInstance.h"

void UDNAGameInstance::DNAUpdate() {
}

void UDNAGameInstance::DNAUnlinkAccount() {
}

void UDNAGameInstance::DNAResetTelemetryErrorStatus() {
}

void UDNAGameInstance::DNAResetSSOLegalDocumentsErrorStatus() {
}

void UDNAGameInstance::DNAResetSSOAccountLinkingErrorStatus() {
}

void UDNAGameInstance::DNAResetSingleSignOnErrorStatus() {
}

void UDNAGameInstance::DNAResetEntitlementsErrorStatus() {
}

void UDNAGameInstance::DNAResetDiscoveryErrorStatus() {
}

void UDNAGameInstance::DNAResetCodesErrorStatus() {
}

void UDNAGameInstance::DNARejectCurrentLegalDocument() {
}

void UDNAGameInstance::DNARejectAllLegalDocuments() {
}

void UDNAGameInstance::DNARedeemCode(const FString& CodeToRedeem) {
}

void UDNAGameInstance::DNAQueueTelemetryEvent(int32 EventsToQueue) {
}

void UDNAGameInstance::DNALogout() {
}

void UDNAGameInstance::DNALogin(APlayerController* PlayerControllerToPoll) {
}

void UDNAGameInstance::DNALinkAccount(const FString& username, const FString& password) {
}

FString UDNAGameInstance::DNAGetLicense() {
    return TEXT("");
}

void UDNAGameInstance::DNAFetchLicenses(int32 DeviceID, const FString& DeviceName) {
}

void UDNAGameInstance::DNAFetchLegalDocuments() {
}

void UDNAGameInstance::DNAFetchEntitlements() {
}

void UDNAGameInstance::DNAEnd() {
}

void UDNAGameInstance::DNAConfigureTelemetry() {
}

void UDNAGameInstance::DNAClearLegalDocumentResults() {
}

void UDNAGameInstance::DNAClearEntitlementResults() {
}

void UDNAGameInstance::DNAClearCodeResults() {
}

void UDNAGameInstance::DNAClearAccountLinkingResults() {
}

void UDNAGameInstance::DNABeginDiscovery() {
}

void UDNAGameInstance::DNABegin() {
}

void UDNAGameInstance::ClearLicensingResults() {
}

UDNAGameInstance::UDNAGameInstance() {
    this->StatusDiscovery = TEXT("None");
    this->StatusSingleSignOn = TEXT("None");
    this->StatusSsoHeartBeat = TEXT("None");
    this->StatusSsoRefresh = TEXT("None");
    this->StatusSsoLegalDocuments = TEXT("None");
    this->StatusSsoAccountLinking = TEXT("None");
    this->StatusLicensing = TEXT("None");
    this->StatusTelemetry = TEXT("None");
    this->StatusEntitlements = TEXT("None");
    this->StatusCodes = TEXT("None");
    this->StatusLoggedIn = TEXT("None");
    this->StatusAccountLinked = TEXT("None");
    this->StatusErrorStatus = TEXT("None");
}

