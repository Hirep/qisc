#include <iostream>
#include "caesar/CaesarCrypto.h"

int main(int argc, const char** argv) {

    if (argc == 1) {
        std::cout << "Crypto tool version 1.0. Author Mike Bohdan.";
    } else {
        CaesarCrypto caesarCrypto(3);
        std::cout << caesarCrypto.Encrypt(std::string(argv[2])) << std::endl;
    }

    return 0;
}