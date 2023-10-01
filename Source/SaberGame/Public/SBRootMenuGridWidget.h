#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "SBRootMenuGridWidget.generated.h"

class USBHardCacheMenuGrid;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBRootMenuGridWidget : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBHardCacheMenuGrid* MainGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StoredMenuGridFocusColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StoredMenuGridFocusRow;
    
public:
    USBRootMenuGridWidget();
};

