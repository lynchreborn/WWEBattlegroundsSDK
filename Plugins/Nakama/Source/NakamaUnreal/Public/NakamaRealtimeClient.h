#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENakamaChannelType.h"
#include "ENakamaRealtimeClientProtocol.h"
#include "NakamaUserPresence.h"
#include "OnAcceptPartyMemberDelegate.h"
#include "OnAddMatchmakerPartyDelegate.h"
#include "OnClosePartyDelegate.h"
#include "OnConnectDelegate.h"
#include "OnCreateMatchDelegate.h"
#include "OnCreatePartyDelegate.h"
#include "OnDisconnectedDelegate.h"
#include "OnFollowUsersDelegate.h"
#include "OnJoinChatDelegate.h"
#include "OnJoinPartyDelegate.h"
#include "OnLeaveChatDelegate.h"
#include "OnLeaveMatchDelegate.h"
#include "OnLeavePartyDelegate.h"
#include "OnListPartyJoinRequestsDelegate.h"
#include "OnMatchmakerTicketDelegate.h"
#include "OnPromotePartyMemberDelegate.h"
#include "OnRealtimeClientConnectedDelegate.h"
#include "OnReceivedChannelMessageDelegate.h"
#include "OnReceivedChannelPresenceEventDelegate.h"
#include "OnReceivedErrorDelegate.h"
#include "OnReceivedMatchDataDelegate.h"
#include "OnReceivedMatchPresenceCallbackDelegate.h"
#include "OnReceivedMatchmakerMatchedDelegate.h"
#include "OnReceivedNotificationDelegate.h"
#include "OnReceivedPartyCloseDelegate.h"
#include "OnReceivedPartyDataDelegate.h"
#include "OnReceivedPartyDelegate.h"
#include "OnReceivedPartyJoinRequestDelegate.h"
#include "OnReceivedPartyLeaderDelegate.h"
#include "OnReceivedPartyMatchmakerTicketDelegate.h"
#include "OnReceivedPartyPresenceDelegate.h"
#include "OnReceivedStatusPresenceDelegate.h"
#include "OnReceivedStreamPresenceDataDelegate.h"
#include "OnReceivedStreamPresenceEventDelegate.h"
#include "OnRemoveMatchmakerPartyDelegate.h"
#include "OnRemovePartyMemberDelegate.h"
#include "OnRemovedMatchmakerTicketDelegate.h"
#include "OnRtErrorDelegate.h"
#include "OnSetStatusDelegate.h"
#include "OnUnFollowUsersDelegate.h"
#include "OnWriteChatMessageDelegate.h"
#include "NakamaRealtimeClient.generated.h"

class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMAUNREAL_API UNakamaRealtimeClient : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* Session;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAsOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaRealtimeClientProtocol Protocol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _displayName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnect ConnectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnected DisconnectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedError ErrorEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedChannelMessage ChannelMessageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedChannelPresenceEvent ChannelPresenceEventReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedMatchmakerMatched MatchmakerMatchMatched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedMatchPresenceCallback MatchmakerPresenceCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedMatchData MatchDataCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedNotification NotificationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedStatusPresence PresenceStatusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedStreamPresenceEvent StreamPresenceEventReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedStreamPresenceData StreamPresenceDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedParty PartyReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyClose PartyCloseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyData PartyDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyJoinRequest PartyJoinRequestReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyLeader PartyLeaderReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyMatchmakerTicket PartyMatchmakerTicketReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedPartyPresence PartyPresenceReceived;
    
    UNakamaRealtimeClient();
    UFUNCTION()
    void UpdateStatus(const FString& StatusMessage, const FOnSetStatus& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void UnFollowUsers(TArray<FString> UserIds, const FOnUnFollowUsers& Success, const FOnRtError& Error);
    
    UFUNCTION(BlueprintCallable)
    void SetListenerStreamPresenceCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerStreamDataCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerStatusPresenceCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyPresenceCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyMatchmakerTicketCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyLeaderCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyJoinRequestCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyDataCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyCloseCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerPartyCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerNotificationsCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerMatchPresenceCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerMatchmakerMatchedCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerMatchDataCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerErrorCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerDisconnectCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerConnectCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerChannelPresenceCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerChannelMessageCallback();
    
    UFUNCTION(BlueprintCallable)
    void SetListenerAllCallbacks();
    
    UFUNCTION()
    void SetAppearOffline(const FOnSetStatus& Success, const FOnRtError& Error);
    
    UFUNCTION(BlueprintCallable)
    void SendPartyData(const FString& PartyId, int64 OpCode, const FString& Data);
    
    UFUNCTION()
    void SendMessage(const FString& ChannelId, const FString& Content, const FOnWriteChatMessage& Success, const FOnRtError& Error);
    
    UFUNCTION(BlueprintCallable)
    void SendMatchData(const FString& MatchId, int64 OpCode, const FString& Data, TArray<FNakamaUserPresence> Presences);
    
    UFUNCTION()
    void SendDirectMessage(const FString& UserID, const FString& Content, const FOnWriteChatMessage& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void RemovePartyMember(const FString& PartyId, FNakamaUserPresence Presence, const FOnRemovePartyMember& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void RemoveMatchMakerParty(const FString& PartyId, const FString& Ticket, const FOnRemoveMatchmakerParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void PromotePartyMember(const FString& PartyId, FNakamaUserPresence PartyMember, const FOnPromotePartyMember& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void ListPartyJoinRequests(const FString& PartyId, const FOnListPartyJoinRequests& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void LeaveParty(const FString& PartyId, const FOnLeaveParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void LeaveMatchmaker(const FString& Ticket, const FOnRemovedMatchmakerTicket& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void LeaveMatch(const FString& MatchId, const FOnLeaveMatch& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void LeaveChat(const FString& ChannelId, const FOnLeaveChat& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void JoinParty(const FString& PartyId, const FOnJoinParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void JoinMatchByToken(const FString& Token, const FOnCreateMatch& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void JoinMatch(const FString& MatchId, TMap<FString, FString> MetaData, const FOnCreateMatch& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void JoinChat(const FString& ChatId, ENakamaChannelType ChannelType, bool Persistence, bool Hidden, const FOnJoinChat& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void FollowUsers(TArray<FString> UserIds, const FOnFollowUsers& Success, const FOnRtError& Error);
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
    UFUNCTION()
    void CreateParty(bool Open, int32 MaxSize, const FOnCreateParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void CreateMatch(const FOnCreateMatch& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void Connect(const FOnRealtimeClientConnected& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void CloseParty(const FString& PartyId, const FOnCloseParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void AddMatchmakerParty(const FString& PartyId, const FString& Query, int32 MinCount, int32 MaxCount, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple, const FOnAddMatchmakerParty& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void AddMatchmaker(int32 MinCount, int32 MaxCount, const FString& Query, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple, const FOnMatchmakerTicket& Success, const FOnRtError& Error);
    
    UFUNCTION()
    void AcceptPartyMember(const FString& PartyId, FNakamaUserPresence Presence, const FOnAcceptPartyMember& Success, const FOnRtError& Error);
    
};

