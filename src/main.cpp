#include <iostream>
#include "loger.h"
#include <thread>
#include <chrono>


int main()
{
    loger log_1("C:/Users/eganyanc333/Documents/git_repos/LogerProject/InformationList.txt");

    log_1.log(loger::Level::Error, "main -> 1: \n");

    log_1.log(loger::Level::Error, "main -> 2: \n");

    std::thread first([&]() {
        log_1.log(loger::Level::Error, "first -> 1: \n");

        log_1.log(loger::Level::Error, "first -> 2: \n");
        });

    std::thread second([&]() {
        log_1.log(loger::Level::Error, "second -> 1: \n");

        log_1.log(loger::Level::Error, "second -> 2: \n");
        });

    first.join();
    second.join();

    return 0;
}