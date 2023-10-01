#include "WWEDefaultContentInteractiveTutorial.h"

UWWEDefaultContentInteractiveTutorial::UWWEDefaultContentInteractiveTutorial() {
    this->InteractiveTutorialWidgetClass = NULL;
    this->InputTutorialEnableTime = 1.00f;
    this->FinalMessageDelay = 0.00f;
    this->InitialLearningCooldown = 10.00f;
    this->LearningCooldown = 10.00f;
    this->TutorialGrabRange = 160.00f;
    this->TutorialMeleeRange = 220.00f;
    this->TutorialSuccessCue = NULL;
    this->TutorialFailedCue = NULL;
}

