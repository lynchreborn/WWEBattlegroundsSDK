#include "NakamaRealtimeClient.h"

void UNakamaRealtimeClient::UpdateStatus(const FString& StatusMessage, const FOnSetStatus& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::UnFollowUsers(TArray<FString> UserIds, const FOnUnFollowUsers& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::SetListenerStreamPresenceCallback() {
}

void UNakamaRealtimeClient::SetListenerStreamDataCallback() {
}

void UNakamaRealtimeClient::SetListenerStatusPresenceCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyPresenceCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyMatchmakerTicketCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyLeaderCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyJoinRequestCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyDataCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyCloseCallback() {
}

void UNakamaRealtimeClient::SetListenerPartyCallback() {
}

void UNakamaRealtimeClient::SetListenerNotificationsCallback() {
}

void UNakamaRealtimeClient::SetListenerMatchPresenceCallback() {
}

void UNakamaRealtimeClient::SetListenerMatchmakerMatchedCallback() {
}

void UNakamaRealtimeClient::SetListenerMatchDataCallback() {
}

void UNakamaRealtimeClient::SetListenerErrorCallback() {
}

void UNakamaRealtimeClient::SetListenerDisconnectCallback() {
}

void UNakamaRealtimeClient::SetListenerConnectCallback() {
}

void UNakamaRealtimeClient::SetListenerChannelPresenceCallback() {
}

void UNakamaRealtimeClient::SetListenerChannelMessageCallback() {
}

void UNakamaRealtimeClient::SetListenerAllCallbacks() {
}

void UNakamaRealtimeClient::SetAppearOffline(const FOnSetStatus& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::SendPartyData(const FString& PartyId, int64 OpCode, const FString& Data) {
}

void UNakamaRealtimeClient::SendMessage(const FString& ChannelId, const FString& Content, const FOnWriteChatMessage& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::SendMatchData(const FString& MatchId, int64 OpCode, const FString& Data, TArray<FNakamaUserPresence> Presences) {
}

void UNakamaRealtimeClient::SendDirectMessage(const FString& UserID, const FString& Content, const FOnWriteChatMessage& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::RemovePartyMember(const FString& PartyId, FNakamaUserPresence Presence, const FOnRemovePartyMember& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::RemoveMatchMakerParty(const FString& PartyId, const FString& Ticket, const FOnRemoveMatchmakerParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::PromotePartyMember(const FString& PartyId, FNakamaUserPresence PartyMember, const FOnPromotePartyMember& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::ListPartyJoinRequests(const FString& PartyId, const FOnListPartyJoinRequests& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::LeaveParty(const FString& PartyId, const FOnLeaveParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::LeaveMatchmaker(const FString& Ticket, const FOnRemovedMatchmakerTicket& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::LeaveMatch(const FString& MatchId, const FOnLeaveMatch& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::LeaveChat(const FString& ChannelId, const FOnLeaveChat& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::JoinParty(const FString& PartyId, const FOnJoinParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::JoinMatchByToken(const FString& Token, const FOnCreateMatch& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::JoinMatch(const FString& MatchId, TMap<FString, FString> MetaData, const FOnCreateMatch& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::JoinChat(const FString& ChatId, ENakamaChannelType ChannelType, bool Persistence, bool Hidden, const FOnJoinChat& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::FollowUsers(TArray<FString> UserIds, const FOnFollowUsers& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::Disconnect() {
}

void UNakamaRealtimeClient::Destroy() {
}

void UNakamaRealtimeClient::CreateParty(bool Open, int32 MaxSize, const FOnCreateParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::CreateMatch(const FOnCreateMatch& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::Connect(const FOnRealtimeClientConnected& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::CloseParty(const FString& PartyId, const FOnCloseParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::AddMatchmakerParty(const FString& PartyId, const FString& Query, int32 MinCount, int32 MaxCount, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple, const FOnAddMatchmakerParty& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::AddMatchmaker(int32 MinCount, int32 MaxCount, const FString& Query, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple, const FOnMatchmakerTicket& Success, const FOnRtError& Error) {
}

void UNakamaRealtimeClient::AcceptPartyMember(const FString& PartyId, FNakamaUserPresence Presence, const FOnAcceptPartyMember& Success, const FOnRtError& Error) {
}

UNakamaRealtimeClient::UNakamaRealtimeClient() {
    this->Session = NULL;
    this->bIsActive = false;
    this->bShowAsOnline = false;
    this->Protocol = ENakamaRealtimeClientProtocol::Protobuf;
    this->TickInterval = 0.00f;
}

