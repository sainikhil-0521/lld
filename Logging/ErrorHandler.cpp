#include "ErrorHandler.h"

ErrorHandler* ErrorHandler::instance = nullptr;

ErrorHandler::ErrorHandler() {}

ErrorHandler* ErrorHandler::getInstance() {
    if (!instance) instance = new ErrorHandler();
    return instance;
}

void ErrorHandler::log(const std::string& message, const std::string& level) {
    if (getLevelValue(level) <= 3) {
        std::cout << "[ERROR] " << message << std::endl;
    }
}
