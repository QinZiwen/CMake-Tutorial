#include "my_lib.h"

#include <iostream>

namespace my_lib {
void print_hello() {
#ifdef USE_MYLIB_S2
    std::cout << "Hello from my_lib, define USE_MYLIB_S2" << std::endl;
#else
    std::cout << "Hello from my_lib, no define USE_MYLIB_S2!" << std::endl;
#endif
}
}  // namespace my_lib