//
// Created by yan4e on 27.02.202
#include "logger.h"
#include <iostream>
Logger* Logger::obj = nullptr;

void Logger::printLog(std::string message) {
    std::cout<< "{" << this << "}" << message << std::endl;
}
Logger &Logger::getInstance() {
    if (obj == nullptr) {
        obj = new Logger();
    }
    return *obj;
}

