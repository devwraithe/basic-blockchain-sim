#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void addBlock(string data);
    void printChain() const;

private:
    vector <Block> chain;
    Block createGenesisBlock() const;
};

#endif // BLOCKCHAIN_H