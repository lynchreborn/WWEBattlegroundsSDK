#include "WWEAngryRamControlComponent.h"

void UWWEAngryRamControlComponent::ServerRequestRotate_Implementation(float ForcedYaw) {
}
bool UWWEAngryRamControlComponent::ServerRequestRotate_Validate(float ForcedYaw) {
    return true;
}

void UWWEAngryRamControlComponent::ServerRequestJump_Implementation() {
}
bool UWWEAngryRamControlComponent::ServerRequestJump_Validate() {
    return true;
}

UWWEAngryRamControlComponent::UWWEAngryRamControlComponent() {
    this->RamCharacter = NULL;
}

