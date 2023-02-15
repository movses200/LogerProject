#include <iostream>
#include "loger.h"

int main()
{
    loger log_1("C:/Users/eganyanc333/Documents/git_repos/LogerProject/InformationList.txt");

    log_1.log(loger::Level::Error,"First log: \n");

    log_1.log(loger::Level::Error,"Second log: \n");

    return 0;
}