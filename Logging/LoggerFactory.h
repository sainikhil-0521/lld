#ifndef LOGGER_FACTORY_H
#define LOGGER_FACTORY_H

// #include "Logger.h"
#include "InfoHandler.h"
#include "DebugHandler.h"
#include "ErrorHandler.h"

class LoggerFactory {
public:
    static Logger* createLoggerChain();
};

#endif // LOGGER_FACTORY_H
