#include "WWEBagpipesWeapon.h"

void AWWEBagpipesWeapon::OnCharacterExitsEffect(AActor* OverlappedActor, AActor* OtherActor) {
}

void AWWEBagpipesWeapon::OnCharacterEnterEffect(AActor* OverlappedActor, AActor* OtherActor) {
}

void AWWEBagpipesWeapon::OnCharacterEnteredRing(const AWWECharacterCombat* CharacterCombat) {
}

void AWWEBagpipesWeapon::OnBagpipesLifetimeEnded(bool bReleaseBagpipes) {
}

void AWWEBagpipesWeapon::CheckAndAffectInsideActors() {
}

void AWWEBagpipesWeapon::CheckAndAffectCharacter(AWWECharacterCombat* CharacterCombat) {
}

AWWEBagpipesWeapon::AWWEBagpipesWeapon() {
    this->BagpiperOwner = NULL;
    this->EffectCollisionSphere = NULL;
    this->TimeToDestroyAfterRelease = 0.50f;
    this->FadeInPlaySoundDuration = 0.10f;
    this->FadeOutPlaySoundDuration = 0.10f;
    this->SoundLibraryClass = NULL;
}

