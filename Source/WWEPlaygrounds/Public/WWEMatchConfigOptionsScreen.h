#pragma once
#include "CoreMinimal.h"
#include "EWWESubmenuTypes.h"
#include "Templates/SubclassOf.h"
#include "WWEMatchSubConfigurationGridSlot.h"
#include "WWEMatchConfigOptionsScreen.generated.h"

class USBUserWidget;
class UWWEMatchConfigFactory;
class UWWEMatchConfigurationMainGrid;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchConfigOptionsScreen : public UWWEMatchSubConfigurationGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBUserWidget* MatchRulesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBUserWidget* InteractivesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBUserWidget* DifficultiesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMatchConfigurationMainGrid* MatchConfigGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEMatchConfigurationMainGrid* DifficultiesGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEMatchConfigFactory> ConfigFacotry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWESubmenuTypes KindOfMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfOptions;
    
public:
    UWWEMatchConfigOptionsScreen();
};

