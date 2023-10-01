#include "WWESteelCage.h"

void AWWESteelCage::SetSiren(bool On) {
}

void AWWESteelCage::SetElectrified(bool On) {
}

AWWESteelCage::AWWESteelCage() {
    this->ElectrifiedGrateMaterial = NULL;
    this->ElectrifiedSteelMaterial = NULL;
    this->SirenOnMaterial = NULL;
    this->SirenSound = NULL;
    this->ElectrifiedSound = NULL;
    this->GrateMaterial = NULL;
    this->SteelMaterial = NULL;
    this->SirenOffMaterial = NULL;
    this->bSirenOn = false;
    this->bElectrified = false;
}

