#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreateGroupDelegate.h"
#include "NakamaClientCreateGroup.generated.h"

class UNakamaClient;
class UNakamaClientCreateGroup;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientCreateGroup : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateGroup OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateGroup OnError;
    
    UNakamaClientCreateGroup();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientCreateGroup* CreateGroup(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupName, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, int32 MaxMembers);
    
};

