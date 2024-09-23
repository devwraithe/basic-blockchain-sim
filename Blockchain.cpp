#include <iostream>
#include "Blockchain.h"

using namespace std;

Blockchain::Blockchain() {
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock() const {
    return Block("Genesis Block", "0");
}

void Blockchain::addBlock(string data) {
    Block newBlock(data, chain.back().getData());
    chain.push_back(newBlock);
}

void Blockchain::printChain() const {
    for (const Block& block : chain) {
        std::cout << "Block Data: " << block.getData() << std::endl;
        std::cout << "Hash: " << block.getHash() << std::endl;
        std::cout << "Previous Hash: " << block.getPreviousHash() << std::endl;
        std::cout << "Timestamp: " << block.getTimestamp() << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }
}