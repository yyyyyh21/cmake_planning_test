#include <iostream>
#include "process.h"

int main(){
    std::cout << "planning start" << std::endl;
    Process pro;
    pro.plan_process();
    std::cout << "planning end" << std::endl;

    return 0;
}