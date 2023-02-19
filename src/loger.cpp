#include "loger.h"

loger::loger(const std::string& path) {
    _worker.open(path, std::ios::app);
};

void loger::log(Level level, const std::string& message, const std::source_location location) {
    if (_worker.is_open()) {
        std::lock_guard<std::mutex> lock(this->mtx);
        _worker << convert(level)
            << ": "
            << "file: "
            << location.file_name() << "("
            << location.line() << ":"
            << location.column() << ") `"
            << location.function_name() << "`: "
            << message << '\n';
    }
}

loger::~loger() {
    _worker.close();
}

std::string loger::convert(Level level)
{
    if (level == Level::Info)
    {
        return "Info";
    }
    else if (level == Level::Warning)
    {
        return "Worning";
    }
    else
    {
        return "Error";
    }
}
