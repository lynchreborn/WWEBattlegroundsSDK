#include "SBHideMeshTester.h"

ASBHideMeshTester::ASBHideMeshTester() {
    this->bIsTestTypeManuallyChosen = false;
    this->TestType = 0;
    this->bCopyIDsFromDataFiles = false;
    this->bCopyIDsFromOtherSources = false;
    this->VertexIndicesDrawMode = ESBHideMeshDebugDrawType::None;
    this->Mesh = NULL;
}

