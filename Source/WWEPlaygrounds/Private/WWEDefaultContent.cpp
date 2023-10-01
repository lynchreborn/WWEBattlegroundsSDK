#include "WWEDefaultContent.h"

FString UWWEDefaultContent::GetDLCUnlockGameStoreItemID() {
    return TEXT("");
}

TArray<EItemBloodline> UWWEDefaultContent::GetCoreFreeBloodlines() {
    return TArray<EItemBloodline>();
}

UWWEDefaultContent::UWWEDefaultContent() {
    this->CharactersData = NULL;
    this->Shop = NULL;
    this->Progression = NULL;
    this->ConfigurableItems = NULL;
    this->AnimViewer = NULL;
    this->PowerUpItems = NULL;
    this->Campaign = NULL;
    this->ArenaItems = NULL;
    this->PassiveTutorial = NULL;
    this->InteractiveTutorial = NULL;
    this->CharactersContent = NULL;
    this->ProgressionContent = NULL;
    this->ConfigurableItemsContent = NULL;
    this->ShopContent = NULL;
    this->AnimViewerContent = NULL;
    this->PowerUpsContent = NULL;
    this->CampaignContent = NULL;
    this->ArenaItemsContent = NULL;
    this->PassiveTutorialContent = NULL;
    this->InteractiveTutorialContent = NULL;
}

