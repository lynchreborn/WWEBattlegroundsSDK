#include "PGSceneCapture2D.h"

void APGSceneCapture2D::RemoveTag(const FName& Tag) {
}

void APGSceneCapture2D::RemovePersistentActor(AActor* PresestentActor) {
}

void APGSceneCapture2D::RemoveAllPersistentActor() {
}

UTextureRenderTarget2D* APGSceneCapture2D::GetRenderTarget() {
    return NULL;
}

void APGSceneCapture2D::AddTag(const FName& Tag) {
}

void APGSceneCapture2D::AddPersistentActor(AActor* PresestentActor) {
}

APGSceneCapture2D::APGSceneCapture2D() {
    this->bIsActivated = false;
    this->CachedOriginalFOVAngle = 0.00f;
    this->bInitialized = false;
    this->bNewMapLoaded = false;
    this->bKeepLightsOn = false;
}

