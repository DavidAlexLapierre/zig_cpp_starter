#include <iostream>

#include "amx.h"

namespace amx {
    void hello() {
        std::cout << "Hello world" << std::endl;
    }
}


int main() {
    amx::hello();
}