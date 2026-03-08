#pragma once
#include <string>

class Logger {
    std::string log;
    static Logger* obj;
private:
    Logger() = default;

public:
    Logger& operator=(const Logger&) = delete;
    Logger& operator=(const Logger&&) = delete;
    Logger(const Logger& ) = delete;
    Logger(const Logger&&) = delete;
    void printLog(std::string message);
    static Logger& getInstance();


};