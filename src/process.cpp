#include <iostream>
#include "process.h"

void Process::plan_process(){
    std::cout << "this is planning process" << std::endl;
    my_map.map_info();
    std::cout << "planning success!" << std::endl;
}