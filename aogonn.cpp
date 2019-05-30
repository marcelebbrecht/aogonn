/*
 * aogonn - main program
 * copyright by Marcel Ebbrecht, 2019 <marcel.ebbrecht@googlemail.com>
 */

#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << argc << std::endl;
    
    
    std::cout << argv[0] << std::endl;
    return 0;
}