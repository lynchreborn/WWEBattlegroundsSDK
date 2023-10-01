#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWECombatResultsSlot.generated.h"

class APlayerState;
class AWWECharacterCombat;
class USBStylizedText;
class USBTextStyle;
class UWWECombatResultsSlotBody;
class UWWEDefaultContentUI;
class UWWEGameInstance;
class UWWELobbyCharacterNameBox;
class UWWELobbyPlayerInfoBox;
class UWWELobbyRarityIcon;
class UWWELobbySlotTextureSet;
class UWWEPlayerSlot;
class UWWESaveGame;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsSlot : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DegubXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DegubInitialXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugXPToConsume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECombatResultsSlotBody* SlotBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyPlayerInfoBox* PlayerInfoBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyCharacterNameBox* CharacterNameBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyRarityIcon* RarityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ResultText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> WinTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> LoseTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWELobbySlotTextureSet* TextureSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* AssociatedCharacterCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* AssociatedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEPlayerSlot* AssociatedPlayerSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWESaveGame* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentUI* ContentUI;
    
public:
    UWWECombatResultsSlot();
};

