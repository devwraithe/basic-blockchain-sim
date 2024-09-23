#include <iostream>
#include "Blockchain.h"

int main() {
    Blockchain myBlockchain;

    std::cout << "Adding Block 1..." << std::endl;
    myBlockchain.addBlock("Alice pays Bob 10 coins");

    std::cout << "Adding Block 2..." << std::endl;
    myBlockchain.addBlock("Bob pays Carol 5 coins");

    std::cout << "Adding Block 3..." << std::endl;
    myBlockchain.addBlock("Carol pays Dave 2 coins");

    std::cout << "Blockchain:" << std::endl;
    myBlockchain.printChain();

    return 0;
}
