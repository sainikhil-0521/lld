#include<iostream>
#include "Logger.h"
#include "InfoHandler.h"
using namespace std;


InfoHandler* InfoHandler::instance = nullptr;

InfoHandler::InfoHandler() {}

InfoHandler* InfoHandler::getInstance() {
    if (!instance) instance = new InfoHandler();
    return instance;
}

void InfoHandler::log(const std::string& message, const std::string& level) {
    if (getLevelValue(level) <= 3) {
        std::cout << "[ERROR] " << message << std::endl;
    }
}
