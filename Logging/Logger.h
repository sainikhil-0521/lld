#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
protected:
    Logger* nextLogHandler = nullptr;
    int logLevel = 1;

public:
    virtual ~Logger() = default;

    virtual void log(const std::string& message, const std::string& level) = 0;

    void setNext(Logger* next);

    static int getLevelValue(const std::string& level);
};

#endif // LOGGER_H
