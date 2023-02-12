#include "loger.h"

loger::loger(){};

void loger::log(const std::string_view message){

    worker.open(path,std::ios::app);

    if(worker.is_open()){
        worker  << "file: "
                << location.file_name() << "("
                << location.line() << ":"
                << location.column() << ") `"
                << location.function_name() << "`: "
                << message << '\n';
        
    }
}