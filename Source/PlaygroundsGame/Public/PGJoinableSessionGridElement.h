#pragma once
#include "CoreMinimal.h"
#include "SBMainMenuGridElement.h"
#include "PGJoinableSessionGridElement.generated.h"

class UPGJoinableSessionsScreen;

UCLASS(Blueprintable, EditInlineNew)
class PLAYGROUNDSGAME_API UPGJoinableSessionGridElement : public USBMainMenuGridElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPGJoinableSessionsScreen* JoinableSessionScreen;
    
    UPGJoinableSessionGridElement();
};

