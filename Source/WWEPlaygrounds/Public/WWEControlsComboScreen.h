#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "ECombinationType.h"
#include "EWWEFightingStyle.h"
#include "Templates/SubclassOf.h"
#include "WWEControlsComboScreen.generated.h"

class UVerticalBox;
class UWWECharacterParameters;
class UWWEControlsComboRow;
class UWWEControlsComboSection;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEControlsComboScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* OptionSelectorsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEControlsComboSection> ComboSectionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEControlsComboRow> ComboRowTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEFightingStyle, TSubclassOf<UWWECharacterParameters>> DefaultCharacterParameterAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ECombinationType, UWWEControlsComboSection*> SectionsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWECharacterParameters> TestCharacterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CachedCharacterParameters;
    
public:
    UWWEControlsComboScreen();
};

