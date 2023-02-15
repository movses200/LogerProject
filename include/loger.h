#pragma once
#include <iostream>
#include <fstream>
#include <source_location>

class loger
{

public:
    enum class Level
    {
        Info,
        Warning,
        Error,
    };

public:
    loger(const std::string &path);
    void log(Level level, const std::string &message, const std::source_location location = std::source_location::current());
    ~loger();

private:
    std::string convert(Level level);

private:
    std::fstream _worker;
};