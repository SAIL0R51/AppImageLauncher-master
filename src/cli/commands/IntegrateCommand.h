#pragma once

// local headers
#include "Command.h"

namespace appimagelauncher {
    namespace cli {
        namespace commands {
            /**
             * Integrates AppImages passed as arguments on the commandline.
             */
            class IntegrateCommand : public Command {
                void exec(QList<QString> arguments) final;
            };
        }
    }
}
