#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGVanityItemEntry.h"
#include "PGVanityItemCollection.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGVanityItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGVanityItemEntry> VanityItems;
    
    UPGVanityItemCollection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetItemsIds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPGVanityItemEntry> GetEntriesWithId(const FString& InItemId) const;
    
};

