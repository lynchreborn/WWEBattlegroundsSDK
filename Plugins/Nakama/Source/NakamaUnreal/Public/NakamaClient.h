#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENakamaClientType.h"
#include "ENakamaFriendState.h"
#include "ENakamaGroupState.h"
#include "ENakamaLeaderboardListBy.h"
#include "ENakamaRealtimeClientProtocol.h"
#include "NakamaDeleteStorageObjectId.h"
#include "NakamaReadStorageObjectId.h"
#include "NakamaStoreObjectWrite.h"
#include "OnAddGroupUsersDelegate.h"
#include "OnAddedFriendDelegate.h"
#include "OnAuthRefreshDelegate.h"
#include "OnAuthRefreshErrorDelegate.h"
#include "OnAuthUpdateDelegate.h"
#include "OnBlockedFriendsDelegate.h"
#include "OnCreateGroupDelegate.h"
#include "OnDeleteNotificationsDelegate.h"
#include "OnDeletedLeaderboardRecordDelegate.h"
#include "OnDemoteGroupUsersDelegate.h"
#include "OnDisconnectedDelegate.h"
#include "OnErrorDelegate.h"
#include "OnFriendsListDelegate.h"
#include "OnGetUsersDelegate.h"
#include "OnGroupsListDelegate.h"
#include "OnImportFacebookFriendsDelegate.h"
#include "OnJoinedGroupDelegate.h"
#include "OnJoinedTournamentDelegate.h"
#include "OnKickGroupUsersDelegate.h"
#include "OnLeaveGroupDelegate.h"
#include "OnLinkSuccessDelegate.h"
#include "OnListChannelMessagesDelegate.h"
#include "OnListGroupMembersDelegate.h"
#include "OnListLeaderboardRecordsDelegate.h"
#include "OnListNotificationsDelegate.h"
#include "OnListTournamentRecordsDelegate.h"
#include "OnListTournamentsDelegate.h"
#include "OnMatchlistDelegate.h"
#include "OnPromoteGroupUsersDelegate.h"
#include "OnRPCDelegate.h"
#include "OnRemoveGroupDelegate.h"
#include "OnRemovedFriendsDelegate.h"
#include "OnRemovedStorageObjectsDelegate.h"
#include "OnStorageObjectAcksDelegate.h"
#include "OnStorageObjectsListedDelegate.h"
#include "OnStorageObjectsReadDelegate.h"
#include "OnUpdateAccountDelegate.h"
#include "OnUpdateGroupDelegate.h"
#include "OnUserAccountInfoDelegate.h"
#include "OnUserGroupsDelegate.h"
#include "OnWriteLeaderboardRecordDelegate.h"
#include "NakamaClient.generated.h"

class UNakamaClient;
class UNakamaRealtimeClient;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMAUNREAL_API UNakamaClient : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _tickInterval;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnected DisconnectedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _displayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UNakamaClient();
    UFUNCTION()
    void WriteTournamentRecord(UNakamaSession* Session, const FString& TournamentId, int64 Score, int64 SubScore, const FString& MetaData, const FOnWriteLeaderboardRecord& Success, const FOnError& Error);
    
    UFUNCTION()
    void WriteStorageObjects(UNakamaSession* Session, TArray<FNakamaStoreObjectWrite> StorageObjectsData, const FOnStorageObjectAcks& Success, const FOnError& Error);
    
    UFUNCTION()
    void WriteLeaderboardRecord(UNakamaSession* Session, const FString& LeaderboardId, int64 Score, int64 SubScore, const FString& MetaData, const FOnWriteLeaderboardRecord& Success, const FOnError& Error);
    
    UFUNCTION()
    void UpdateGroup(UNakamaSession* Session, const FString& GroupId, const FString& Name, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, const FOnUpdateGroup& Success, const FOnError& Error);
    
    UFUNCTION()
    void UpdateAccount(UNakamaSession* Session, const FString& username, const FString& DisplayName, const FString& AvatarUrl, const FString& LanguageTag, const FString& Location, const FString& TimeZone, const FOnUpdateAccount& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkSteam(UNakamaSession* Session, const FString& SteamToken, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkGoogle(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkGameCenter(UNakamaSession* Session, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkFacebook(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkEmail(UNakamaSession* Session, const FString& Email, const FString& password, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkDevice(UNakamaSession* Session, const FString& DeviceID, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkCustom(UNakamaSession* Session, const FString& CustomId, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void UnLinkApple(UNakamaSession* Session, const FString& Token, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION(BlueprintCallable)
    UNakamaRealtimeClient* SetupRealtimeClient(UNakamaSession* Session, bool ShowAsOnline, int32 Port, ENakamaRealtimeClientProtocol Protocol, float TickInterval, const FString& DisplayName);
    
    UFUNCTION()
    void RPC(UNakamaSession* Session, const FString& FunctionId, const FString& Payload, const FOnRPC& Success, const FOnError& Error);
    
    UFUNCTION(BlueprintCallable)
    void RestoreSession(const FString& Token, const FString& RefreshToken, UNakamaSession*& RestoredSession);
    
    UFUNCTION()
    void RemoveStorageObjects(UNakamaSession* Session, TArray<FNakamaDeleteStorageObjectId> StorageObjectsData, const FOnRemovedStorageObjects& Success, const FOnError& Error);
    
    UFUNCTION()
    void RemoveFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnRemovedFriends& Success, const FOnError& Error);
    
    UFUNCTION()
    void RefreshSession(UNakamaSession* Session, const FOnAuthRefresh& Success, const FOnAuthRefreshError& Error);
    
    UFUNCTION()
    void ReadStorageObjects(UNakamaSession* Session, TArray<FNakamaReadStorageObjectId> StorageObjectsData, const FOnStorageObjectsRead& Success, const FOnError& Error);
    
    UFUNCTION()
    void PromoteGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnPromoteGroupUsers& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListUserGroups(UNakamaSession* Session, const FString& UserID, int32 Limit, ENakamaGroupState State, const FString& Cursor, const FOnUserGroups& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListTournaments(UNakamaSession* Session, int32 CategoryStart, int32 CategoryEnd, int32 StartTime, int32 EndTime, int32 Limit, const FString& Cursor, const FOnListTournaments& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListTournamentRecordsAroundOwner(UNakamaSession* Session, const FString& TournamentId, const FString& OwnerId, int32 Limit, const FOnListTournamentRecords& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListTournamentRecords(UNakamaSession* Session, const FString& TournamentId, int32 Limit, const FString& Cursor, TArray<FString> OwnerIds, ENakamaLeaderboardListBy ListBy, const FOnListTournamentRecords& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListStorageObjects(UNakamaSession* Session, const FString& Collection, const FString& UserID, int32 Limit, const FString& Cursor, const FOnStorageObjectsListed& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListNotifications(UNakamaSession* Session, int32 Limit, const FString& Cursor, const FOnListNotifications& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListMatches(UNakamaSession* Session, int32 MinSize, int32 MaxSize, int32 Limit, const FString& Label, bool Authoritative, const FOnMatchlist& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListLeaderboardRecordsAroundOwner(UNakamaSession* Session, const FString& LeaderboardId, const FString& OwnerId, int32 Limit, const FOnListLeaderboardRecords& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListLeaderboardRecords(UNakamaSession* Session, const FString& LeaderboardId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy, const FOnListLeaderboardRecords& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListGroupUsers(UNakamaSession* Session, const FString& GroupId, int32 Limit, ENakamaGroupState State, const FString& Cursor, const FOnListGroupMembers& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListGroups(UNakamaSession* Session, const FString& GroupNameFilter, int32 Limit, const FString& Cursor, const FOnGroupsList& Success, const FOnError& Error);
    
    UFUNCTION()
    void ListChannelMessages(UNakamaSession* Session, const FString& ChannelId, int32 Limit, const FString& Cursor, bool Forward, const FOnListChannelMessages& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkSteam(UNakamaSession* Session, const FString& SteamToken, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkGoogle(UNakamaSession* Session, const FString& AccessToken, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkGameCenter(UNakamaSession* Session, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkFacebook(UNakamaSession* Session, const FString& AccessToken, bool ImportFriends, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkEmail(UNakamaSession* Session, const FString& Email, const FString& password, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkDevice(UNakamaSession* Session, const FString& DeviceID, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkCustom(UNakamaSession* Session, const FString& CustomId, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LinkApple(UNakamaSession* Session, const FString& Token, const FOnLinkSuccess& Success, const FOnError& Error);
    
    UFUNCTION()
    void LeaveGroup(UNakamaSession* Session, const FString& GroupId, const FOnLeaveGroup& Success, const FOnError& Error);
    
    UFUNCTION()
    void KickGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnKickGroupUsers& Success, const FOnError& Error);
    
    UFUNCTION()
    void JoinTournament(UNakamaSession* Session, const FString& TournamentId, const FOnJoinedTournament& Success, const FOnError& Error);
    
    UFUNCTION()
    void JoinGroup(UNakamaSession* Session, const FString& GroupId, const FOnJoinedGroup& Success, const FOnError& Error);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSystem(const FString& ServerKey, const FString& Host, int32 Port, bool UseSSL, bool EnableDebug, ENakamaClientType Type, float TickInterval, const FString& DisplayName);
    
    UFUNCTION()
    void ImportFacebookFriends(UNakamaSession* Session, const FString& Token, bool Reset, const FOnImportFacebookFriends& Success, const FOnError& Error);
    
    UFUNCTION()
    void GetUsers(UNakamaSession* Session, TArray<FString> UserIds, TArray<FString> Usernames, TArray<FString> FacebookIds, const FOnGetUsers& Success, const FOnError& Error);
    
    UFUNCTION()
    void GetUserAccount(UNakamaSession* Session, const FOnUserAccountInfo& Success, const FOnError& Error);
    
    UFUNCTION()
    void GetFriends(UNakamaSession* Session, int32 Limit, ENakamaFriendState State, const FString& Cursor, const FOnFriendsList& Success, const FOnError& Error);
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION()
    void DemoteGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnDemoteGroupUsers& Success, const FOnError& Error);
    
    UFUNCTION()
    void DeleteNotifications(UNakamaSession* Session, TArray<FString> NotificationIds, const FOnDeleteNotifications& Success, const FOnError& Error);
    
    UFUNCTION()
    void DeleteLeaderboardRecord(UNakamaSession* Session, const FString& LeaderboardId, const FOnDeletedLeaderboardRecord& Success, const FOnError& Error);
    
    UFUNCTION()
    void DeleteGroup(UNakamaSession* Session, const FString& GroupId, const FOnRemoveGroup& Success, const FOnError& Error);
    
    UFUNCTION()
    void CreateGroup(UNakamaSession* Session, const FString& GroupName, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, int32 MaxMembers, const FOnCreateGroup& Success, const FOnError& Error);
    
    UFUNCTION(BlueprintCallable)
    static UNakamaClient* CreateDefaultClient(const FString& ServerKey, const FString& Host, int32 Port, bool UseSSL, bool EnableDebug, ENakamaClientType Type, float TickInterval, const FString& DisplayName);
    
    UFUNCTION()
    void BlockFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnBlockedFriends& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateSteam(const FString& SteamToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateGoogle(const FString& AccessToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateGameCenter(const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateFacebook(const FString& AccessToken, const FString& username, bool CreateAccount, bool ImportFriends, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateEmail(const FString& Email, const FString& password, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateDevice(const FString& DeviceID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateCustom(const FString& UserID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AuthenticateApple(const FString& Token, const FString& username, bool CreateAccount, TMap<FString, FString> Vars, const FOnAuthUpdate& Success, const FOnError& Error);
    
    UFUNCTION()
    void AddGroupUsers(UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds, const FOnAddGroupUsers& Success, const FOnError& Error);
    
    UFUNCTION()
    void AddFriends(UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames, const FOnAddedFriend& Success, const FOnError& Error);
    
};

