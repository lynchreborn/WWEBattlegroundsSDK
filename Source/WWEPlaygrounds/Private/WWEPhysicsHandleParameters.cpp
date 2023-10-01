#include "WWEPhysicsHandleParameters.h"

FWWEPhysicsHandleParameters::FWWEPhysicsHandleParameters() {
    this->AngularDamping = 0.00f;
    this->AngularStiffness = 0.00f;
    this->LinearDamping = 0.00f;
    this->LinearStiffness = 0.00f;
    this->InterpolationSpeed = 0.00f;
    this->bSoftAngularConstraint = false;
    this->bSoftLinearConstraint = false;
    this->bInterpolateTarget = false;
}

