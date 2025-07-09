#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include "Logger.h"
#include <string>
#include <iostream>

class ErrorHandler : public Logger {
private:
    static ErrorHandler* instance;

    ErrorHandler(); // private constructor

public:
    static ErrorHandler* getInstance();

    void log(const std::string& message, const std::string& level) override;
};

#endif // ERROR_HANDLER_H
