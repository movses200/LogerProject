#include "loger.h"

loger::loger(std::string mess){

    worker.open("C:/Users/eganyanc333/Documents/git_repos/LogerProject/InformationList.txt",std::ios::app);
    if(worker.is_open()){
        worker << mess;
        worker.close();
    }
}