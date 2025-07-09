#ifndef INFO_HANDLER_H
#define INFO_HANDLER_H

#include "Logger.h"
#include <string>
#include <iostream>

class InfoHandler : public Logger {
private:
    static InfoHandler* instance;

    InfoHandler();

public:
    static InfoHandler* getInstance();

    void log(const std::string& message, const std::string& level) override;
};

#endif // INFO_HANDLER_H
