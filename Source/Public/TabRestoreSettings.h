#pragma once

#include <UObject/Object.h>
#include "TabRestoreSettings.generated.h"


UCLASS(Config = TabRestoreSettings)
class TABRESTORE_API UTabRestoreSettings : public UObject
{
    GENERATED_BODY()

public:
    static const UTabRestoreSettings* Get() { return GetDefault<UTabRestoreSettings>(); }

public:
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly)
    FInputChord RestoreClosedTab = FInputChord(
    	FKey(TEXT("T")),
        true, // shift
#if PLATFORM_MAC
        false, // ctrl
#else
        true,  // ctrl
#endif
        false, // alt
#if PLATFORM_MAC
        true   // command
#else
        false  // command
#endif
    );
};
