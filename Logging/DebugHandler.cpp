#include<iostream>
#include "Logger.h"
#include "DebugHandler.h"
using namespace std;


DebugHandler* DebugHandler::instance = nullptr;

DebugHandler::DebugHandler() {}

DebugHandler* DebugHandler::getInstance() {
    if (!instance) instance = new DebugHandler();
    return instance;
}

void DebugHandler::log(const std::string& message, const std::string& level) {
    if (getLevelValue(level) <= 3) {
        std::cout << "[ERROR] " << message << std::endl;
    }
}
