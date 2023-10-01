#include "WWEBodyData.h"

FWWEBodyData::FWWEBodyData() {
    this->bOverrideMass = false;
    this->MassInKg = 0.00f;
    this->LinearDamping = 0.00f;
    this->AngularDamping = 0.00f;
    this->bEnableGravity = false;
    this->bSimulatePhysics = false;
    this->SleepFamily = ESleepFamily::Normal;
    this->PositionSolverIterationCount = 0;
    this->VelocitySolverIterationCount = 0;
    this->CustomSleepThresholdMultiplier = 0.00f;
    this->StabilizationThresholdMultiplier = 0.00f;
    this->bSimulationGeneratesHitEvents = false;
}

