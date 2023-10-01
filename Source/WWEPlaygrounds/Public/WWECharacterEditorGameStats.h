#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWECharacterEditorGameStats.generated.h"

class UTextBlock;
class UWWECharacterParameters;
class UWWECharacterStatSlotWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorGameStats : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterParameters* CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CharacterNameBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterStatSlotWidget* StrenghtSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterStatSlotWidget* CharismaSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterStatSlotWidget* ResistanceSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterStatSlotWidget* AgilitySlot;
    
public:
    UWWECharacterEditorGameStats();
    UFUNCTION(BlueprintCallable)
    void SetCharacterParameters(UWWECharacterParameters* Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWWECharacterParameters* GetCharacterParameters() const;
    
};

