#include "WWECharacterEditorTV.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

AWWECharacterEditorTV::AWWECharacterEditorTV() {
    this->TVMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TVMesh"));
    this->VideoDisplayWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("VideoDisplayWidgetComponent"));
    this->VideoDisplayWidget = NULL;
}

