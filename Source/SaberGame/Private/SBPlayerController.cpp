#include "SBPlayerController.h"
#include "SBPlayerInput.h"

void ASBPlayerController::ServerSetPlatform_Implementation(ESBPlatformType NewPlatform) {
}
bool ASBPlayerController::ServerSetPlatform_Validate(ESBPlatformType NewPlatform) {
    return true;
}

void ASBPlayerController::ServerConsoleCommand_Implementation(const FString& Command) {
}
bool ASBPlayerController::ServerConsoleCommand_Validate(const FString& Command) {
    return true;
}

ASBPlayerController::ASBPlayerController() {
    this->bDestroyPawnOnLeave = false;
    this->PlayerInputClass = USBPlayerInput::StaticClass();
    this->bDisableForceFeedback = false;
}

