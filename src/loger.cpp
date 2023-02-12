#include "loger.h"

loger::loger(std::string mess){

    worker.open("InformationList.txt",std::ios::out);
    if(worker.is_open()){
        worker << mess;
        worker.close();
    }
}