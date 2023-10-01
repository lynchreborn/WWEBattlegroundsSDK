#pragma once
#include "CoreMinimal.h"
#include "SBMenuGrid.h"
#include "SBHardCacheMenuGrid.generated.h"

class USBRootMenuGridWidget;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBHardCacheMenuGrid : public USBMenuGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBRootMenuGridWidget* RootWidget;
    
public:
    USBHardCacheMenuGrid();
    UFUNCTION(BlueprintCallable)
    void SetRootWidget(USBRootMenuGridWidget* _RootWidget);
    
};

