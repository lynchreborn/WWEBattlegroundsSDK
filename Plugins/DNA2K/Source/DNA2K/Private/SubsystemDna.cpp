#include "SubsystemDna.h"

void USubsystemDna::Update() {
}

void USubsystemDna::UnlinkAccount() {
}

void USubsystemDna::ResetTelemetryErrorStatus() {
}

void USubsystemDna::ResetSSOLegalDocumentsErrorStatus() {
}

void USubsystemDna::ResetSSOAccountLinkingErrorStatus() {
}

void USubsystemDna::ResetSingleSignOnErrorStatus() {
}

void USubsystemDna::ResetEntitlementsErrorStatus() {
}

void USubsystemDna::ResetDiscoveryErrorStatus() {
}

void USubsystemDna::ResetCodesErrorStatus() {
}

void USubsystemDna::RejectCurrentLegalDocument() {
}

void USubsystemDna::RejectAllLegalDocuments() {
}

void USubsystemDna::RedeemCode(const FString& CodeToRedeem) {
}

void USubsystemDna::Logout() {
}

void USubsystemDna::Login(APlayerController* PlayerControllerToPoll) {
}

void USubsystemDna::LinkAccount(const FString& username, const FString& password) {
}

FString USubsystemDna::GetLicense() {
    return TEXT("");
}

void USubsystemDna::FetchLicenses(int32 DeviceID, const FString& DeviceName) {
}

void USubsystemDna::FetchLegalDocuments() {
}

void USubsystemDna::FetchEntitlements() {
}

void USubsystemDna::ConfigureTelemetry() {
}

void USubsystemDna::ClearLicensingResults() {
}

void USubsystemDna::ClearLegalDocumentResults() {
}

void USubsystemDna::ClearEntitlementResults() {
}

void USubsystemDna::ClearCodeResults() {
}

void USubsystemDna::ClearAccountLinkingResults() {
}

void USubsystemDna::BeginDiscovery() {
}

USubsystemDna::USubsystemDna() {
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

