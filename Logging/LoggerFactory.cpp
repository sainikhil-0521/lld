#include "InfoHandler.h"
#include "DebugHandler.h"
#include "ErrorHandler.h"
#include "Logger.h"
#include "LoggerFactory.h"

Logger* LoggerFactory::createLoggerChain() {
    InfoHandler* info = InfoHandler::getInstance();
    DebugHandler* debug = DebugHandler::getInstance();
    ErrorHandler* error = ErrorHandler::getInstance();

    info->setNext(debug);
    debug->setNext(error);

    return info;
}
