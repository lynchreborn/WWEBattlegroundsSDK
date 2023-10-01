#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEComicItem.generated.h"

class UWWEComicPageWidget;

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEComicItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString OwnerCampaignNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEComicPageWidget>> Pages;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int8 CurrentPathIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bItWasLastPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bItWasRead;
    
public:
    UWWEComicItem();
};

