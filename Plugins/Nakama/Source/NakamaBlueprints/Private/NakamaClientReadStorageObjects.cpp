#include "NakamaClientReadStorageObjects.h"

UNakamaClientReadStorageObjects* UNakamaClientReadStorageObjects::ReadStorageObjects(UNakamaClient* Client, UNakamaSession* Session, TArray<FNakamaReadStorageObjectId> StorageObjectsData) {
    return NULL;
}

UNakamaClientReadStorageObjects::UNakamaClientReadStorageObjects() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

