#include "WWEStaticMeshActor.h"

void AWWEStaticMeshActor::ActivatePhysics(float Impulse, float MinimumAngularImpulse, float MaximumAngularImpulse) {
}

AWWEStaticMeshActor::AWWEStaticMeshActor() {
    this->SecondsUntilActorDisappears = 3.00f;
    this->bHasAcceleratedAlready = false;
    this->bHasDynamicMaterialBeenSet = false;
}

