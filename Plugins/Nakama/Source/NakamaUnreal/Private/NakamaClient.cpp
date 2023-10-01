#include "NakamaClient.h"

void UNakamaClient::WriteTournamentRecord(UNakamaSession* Session, const FString& TournamentId, int64 Score, int64 SubScore, const FString& MetaData, const FOnWriteLeaderboardRecord& Success, const FOnError& Error) {
}

void UNakamaClient::WriteStorageObjects(UNakamaSession* Session, TArray<FNakamaStoreObjectWrite> StorageObjectsData, const FOnStorageObjectAcks& Success, const FOnError& Error) {
}

void UNakamaClient::WriteLeaderboardRecord(UNakamaSession* Session, const FString& LeaderboardId, int64 Score, int64 SubScore, const FString& MetaData, const FOnWriteLeaderboardRecord& Success, const FOnError& Error) {
}

void UNakamaClient::UpdateGroup(UNakamaSession* Session, const FString& GroupId, const FString& Name, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, const FOnUpdateGroup& Success, const FOnError& Error) {
}

void UNakamaClient::UpdateAccount(UNakamaSession* Session, const FString& username, const FString& DisplayName, const FString& AvatarUrl, const FString& LanguageTag, const FString& Location, const FString& TimeZone, const FOnUpdateAccount& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkSteam(UNakamaSession* Session, const FString& SteamToken, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkGoogle(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkGameCenter(UNakamaSession* Session, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkFacebook(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkEmail(UNakamaSession* Session, const FString& Email, const FString& password, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkDevice(UNakamaSession* Session, const FString& DeviceID, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkCustom(UNakamaSession* Session, const FString& CustomId, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::UnLinkApple(UNakamaSession* Session, const FString& Token, const FOnLinkSuccess& Success, const FOnError& Error) {
}

UNakamaRealtimeClient* UNakamaClient::SetupRealtimeClient(UNakamaSession* Session, bool ShowAsOnline, int32 Port, ENakamaRealtimeClientProtocol Protocol, float TickInterval, const FString& DisplayName) {
    return NULL;
}

void UNakamaClient::RPC(UNakamaSession* Session, const FString& FunctionId, const FString& Payload, const FOnRPC& Success, const FOnError& Error) {
}

void UNakamaClient::RestoreSession(const FString& Token, const FString& RefreshToken, UNakamaSession*& RestoredSession) {
}

void UNakamaClient::RemoveStorageObjects(UNakamaSession* Session, TArray<FNakamaDeleteStorageObjectId> StorageObjectsData, const FOnRemovedStorageObjects& Success, const FOnError& Error) {
}

void UNakamaClient::RemoveFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnRemovedFriends& Success, const FOnError& Error) {
}

void UNakamaClient::RefreshSession(UNakamaSession* Session, const FOnAuthRefresh& Success, const FOnAuthRefreshError& Error) {
}

void UNakamaClient::ReadStorageObjects(UNakamaSession* Session, TArray<FNakamaReadStorageObjectId> StorageObjectsData, const FOnStorageObjectsRead& Success, const FOnError& Error) {
}

void UNakamaClient::PromoteGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnPromoteGroupUsers& Success, const FOnError& Error) {
}

void UNakamaClient::ListUserGroups(UNakamaSession* Session, const FString& UserID, int32 Limit, ENakamaGroupState State, const FString& Cursor, const FOnUserGroups& Success, const FOnError& Error) {
}

void UNakamaClient::ListTournaments(UNakamaSession* Session, int32 CategoryStart, int32 CategoryEnd, int32 StartTime, int32 EndTime, int32 Limit, const FString& Cursor, const FOnListTournaments& Success, const FOnError& Error) {
}

void UNakamaClient::ListTournamentRecordsAroundOwner(UNakamaSession* Session, const FString& TournamentId, const FString& OwnerId, int32 Limit, const FOnListTournamentRecords& Success, const FOnError& Error) {
}

void UNakamaClient::ListTournamentRecords(UNakamaSession* Session, const FString& TournamentId, int32 Limit, const FString& Cursor, TArray<FString> OwnerIds, ENakamaLeaderboardListBy ListBy, const FOnListTournamentRecords& Success, const FOnError& Error) {
}

void UNakamaClient::ListStorageObjects(UNakamaSession* Session, const FString& Collection, const FString& UserID, int32 Limit, const FString& Cursor, const FOnStorageObjectsListed& Success, const FOnError& Error) {
}

void UNakamaClient::ListNotifications(UNakamaSession* Session, int32 Limit, const FString& Cursor, const FOnListNotifications& Success, const FOnError& Error) {
}

void UNakamaClient::ListMatches(UNakamaSession* Session, int32 MinSize, int32 MaxSize, int32 Limit, const FString& Label, bool Authoritative, const FOnMatchlist& Success, const FOnError& Error) {
}

void UNakamaClient::ListLeaderboardRecordsAroundOwner(UNakamaSession* Session, const FString& LeaderboardId, const FString& OwnerId, int32 Limit, const FOnListLeaderboardRecords& Success, const FOnError& Error) {
}

void UNakamaClient::ListLeaderboardRecords(UNakamaSession* Session, const FString& LeaderboardId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy, const FOnListLeaderboardRecords& Success, const FOnError& Error) {
}

void UNakamaClient::ListGroupUsers(UNakamaSession* Session, const FString& GroupId, int32 Limit, ENakamaGroupState State, const FString& Cursor, const FOnListGroupMembers& Success, const FOnError& Error) {
}

void UNakamaClient::ListGroups(UNakamaSession* Session, const FString& GroupNameFilter, int32 Limit, const FString& Cursor, const FOnGroupsList& Success, const FOnError& Error) {
}

void UNakamaClient::ListChannelMessages(UNakamaSession* Session, const FString& ChannelId, int32 Limit, const FString& Cursor, bool Forward, const FOnListChannelMessages& Success, const FOnError& Error) {
}

void UNakamaClient::LinkSteam(UNakamaSession* Session, const FString& SteamToken, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkGoogle(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkGameCenter(UNakamaSession* Session, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkFacebook(UNakamaSession* Session, const FString& AccessToken, bool ImportFriends, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkEmail(UNakamaSession* Session, const FString& Email, const FString& password, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkDevice(UNakamaSession* Session, const FString& DeviceID, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkCustom(UNakamaSession* Session, const FString& CustomId, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LinkApple(UNakamaSession* Session, const FString& Token, const FOnLinkSuccess& Success, const FOnError& Error) {
}

void UNakamaClient::LeaveGroup(UNakamaSession* Session, const FString& GroupId, const FOnLeaveGroup& Success, const FOnError& Error) {
}

void UNakamaClient::KickGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnKickGroupUsers& Success, const FOnError& Error) {
}

void UNakamaClient::JoinTournament(UNakamaSession* Session, const FString& TournamentId, const FOnJoinedTournament& Success, const FOnError& Error) {
}

void UNakamaClient::JoinGroup(UNakamaSession* Session, const FString& GroupId, const FOnJoinedGroup& Success, const FOnError& Error) {
}

void UNakamaClient::InitializeSystem(const FString& ServerKey, const FString& Host, int32 Port, bool UseSSL, bool EnableDebug, ENakamaClientType Type, float TickInterval, const FString& DisplayName) {
}

void UNakamaClient::ImportFacebookFriends(UNakamaSession* Session, const FString& Token, bool Reset, const FOnImportFacebookFriends& Success, const FOnError& Error) {
}

void UNakamaClient::GetUsers(UNakamaSession* Session, TArray<FString> UserIds, TArray<FString> Usernames, TArray<FString> FacebookIds, const FOnGetUsers& Success, const FOnError& Error) {
}

void UNakamaClient::GetUserAccount(UNakamaSession* Session, const FOnUserAccountInfo& Success, const FOnError& Error) {
}

void UNakamaClient::GetFriends(UNakamaSession* Session, int32 Limit, ENakamaFriendState State, const FString& Cursor, const FOnFriendsList& Success, const FOnError& Error) {
}

void UNakamaClient::Disconnect() {
}

void UNakamaClient::Destroy() {
}

void UNakamaClient::DemoteGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnDemoteGroupUsers& Success, const FOnError& Error) {
}

void UNakamaClient::DeleteNotifications(UNakamaSession* Session, TArray<FString> NotificationIds, const FOnDeleteNotifications& Success, const FOnError& Error) {
}

void UNakamaClient::DeleteLeaderboardRecord(UNakamaSession* Session, const FString& LeaderboardId, const FOnDeletedLeaderboardRecord& Success, const FOnError& Error) {
}

void UNakamaClient::DeleteGroup(UNakamaSession* Session, const FString& GroupId, const FOnRemoveGroup& Success, const FOnError& Error) {
}

void UNakamaClient::CreateGroup(UNakamaSession* Session, const FString& GroupName, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, int32 MaxMembers, const FOnCreateGroup& Success, const FOnError& Error) {
}

UNakamaClient* UNakamaClient::CreateDefaultClient(const FString& ServerKey, const FString& Host, int32 Port, bool UseSSL, bool EnableDebug, ENakamaClientType Type, float TickInterval, const FString& DisplayName) {
    return NULL;
}

void UNakamaClient::BlockFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnBlockedFriends& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateSteam(const FString& SteamToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateGoogle(const FString& AccessToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateGameCenter(const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateFacebook(const FString& AccessToken, const FString& username, bool CreateAccount, bool ImportFriends, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateEmail(const FString& Email, const FString& password, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateDevice(const FString& DeviceID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateCustom(const FString& UserID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AuthenticateApple(const FString& Token, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error) {
}

void UNakamaClient::AddGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnAddGroupUsers& Success, const FOnError& Error) {
}

void UNakamaClient::AddFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnAddedFriend& Success, const FOnError& Error) {
}

UNakamaClient::UNakamaClient() {
    this->_tickInterval = 0.00f;
    this->bIsActive = false;
}

