#include "logger.h"

void callFunc() {
    Logger::getInstance().printLog("Hello from func");
}

int main() {
    Logger::getInstance().printLog("Hello from main");
    {
        Logger::getInstance().printLog("Hello from main2");
    }
    {
        Logger::getInstance().printLog("Hello from main3");
    }
    callFunc();
}