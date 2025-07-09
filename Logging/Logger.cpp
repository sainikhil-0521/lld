#include <iostream>
#include <string>
#include "LoggerFactory.h"
using namespace std;

#include "Logger.h"

void Logger::setNext(Logger* next) {
    nextLogHandler = next;
}

int Logger::getLevelValue(const std::string& level) {
    if (level == "INFO") return 1;
    if (level == "DEBUG") return 2;
    if (level == "ERROR") return 3;
    return 99;
}


int main() {
    Logger* logger = LoggerFactory::createLoggerChain();

    logger->log("System booted", "INFO");
    logger->log("Something to debug", "DEBUG");
    logger->log("Critical failure", "ERROR");

    return 0;
}
