#include "WWEAction_ClimbElectrocuted.h"

void UWWEAction_ClimbElectrocuted::MulticastFinishElectrocution_Implementation() {
}

UWWEAction_ClimbElectrocuted::UWWEAction_ClimbElectrocuted() {
    this->MinElectrocutionTime = 1.00f;
    this->MaxElectrocutionTime = 3.00f;
    this->SoundLibraryClass = NULL;
    this->ElectrocutionSoundComponent = NULL;
}

