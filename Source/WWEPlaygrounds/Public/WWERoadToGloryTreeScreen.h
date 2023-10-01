#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWECampaignTreeScreen.h"
#include "WWERoadToGloryTreeScreen.generated.h"

class AWWECharacterBox;
class UWWECharacterParameters;
class UWWEUserInfoHeader;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERoadToGloryTreeScreen : public UWWECampaignTreeScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CharacterParamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterBox* CharacterBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWECharacterBox> CharacterBoxClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* UserInfoHeader;
    
public:
    UWWERoadToGloryTreeScreen();
};

