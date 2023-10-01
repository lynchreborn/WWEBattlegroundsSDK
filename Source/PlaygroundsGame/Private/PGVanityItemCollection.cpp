#include "PGVanityItemCollection.h"

TArray<FString> UPGVanityItemCollection::GetItemsIds() const {
    return TArray<FString>();
}

TArray<FPGVanityItemEntry> UPGVanityItemCollection::GetEntriesWithId(const FString& InItemId) const {
    return TArray<FPGVanityItemEntry>();
}

UPGVanityItemCollection::UPGVanityItemCollection() {
    this->bSortItemsBeforeSaving = false;
}

