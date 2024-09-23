#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <ctime>
#include <openssl/sha.h> // for sha256 hashing

using namespace std;

class Block {
public:
    Block(string data, string prevHash);

    string getHash() const;
    string getPreviousHash() const;
    string getData() const;
    time_t getTimestamp() const;

private:
    string calculateHash() const;

    string data;
    string previousHash;
    string hash;
    time_t timestamp;
};

#endif // BLOCK_H
