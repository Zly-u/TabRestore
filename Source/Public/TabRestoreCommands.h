#pragma once

#include <Framework/Commands/Commands.h>

class FTabRestoreCommands : public TCommands<FTabRestoreCommands>
{
public:
    FTabRestoreCommands()
        : TCommands<FTabRestoreCommands>(
            TEXT("Tab Restore"),
            NSLOCTEXT("Contexts", "Tab Restore", "Tab Restore Plugin"),
            NAME_None,
            FEditorStyle::GetStyleSetName()
        )
    {
    }

    virtual void RegisterCommands() override;

public:
    TSharedPtr<FUICommandInfo> RestoreClosedTab;
};