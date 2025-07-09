#ifndef DEBUG_HANDLER_H
#define DEBUG_HANDLER_H

#include "Logger.h"
#include <string>
#include <iostream>

class DebugHandler : public Logger {
private:
    static DebugHandler* instance;

    DebugHandler();

public:
    static DebugHandler* getInstance();

    void log(const std::string& message, const std::string& level) override;
};

#endif // DEBUG_HANDLER_H
