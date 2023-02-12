#pragma once
#include <iostream>
#include <fstream>
#include <source_location>
#include <string_view>

class loger{
    public:
    loger();
    void log(const std::string_view message,const std::source_location location = std::source_location::current());

    std::string path="C:/Users/eganyanc333/Documents/git_repos/LogerProject/InformationList.txt";
    std::fstream worker;
};