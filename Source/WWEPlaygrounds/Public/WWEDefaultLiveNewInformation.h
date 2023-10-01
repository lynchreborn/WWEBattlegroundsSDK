#pragma once
#include "CoreMinimal.h"
#include "WWEDefaultLiveLanguagueContent.h"
#include "WWEDefaultLiveNewInformation.generated.h"

USTRUCT(BlueprintType)
struct FWWEDefaultLiveNewInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent en;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent es;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent fr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent it;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent ja;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent ko;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent zhs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent zht;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent de;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDefaultLiveLanguagueContent ar;
    
    WWEPLAYGROUNDS_API FWWEDefaultLiveNewInformation();
};

