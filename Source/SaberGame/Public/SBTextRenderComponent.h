#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "SBTextRenderComponent.generated.h"

class UFont;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SABERGAME_API USBTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* RichFont;
    
    USBTextRenderComponent();
};

