#include "Block.h"
#include <cstdio>

using namespace std;

Block::Block(string data, string prevHash) : data(data), previousHash(prevHash), timestamp(time(0)) {
    hash = calculateHash();
}

string Block::getHash() const {
    return hash;
}

string Block::getPreviousHash() const {
    return previousHash;
}

string Block::getData() const {
    return data;
}

time_t Block::getTimestamp() const {
    return timestamp;
}

string Block::calculateHash() const {
    string input = data + previousHash + to_string(timestamp);
    unsigned char result[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char *>(input.c_str()), input.length(), result);
    string hash;
    char buffer[3];
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        snprintf(buffer, sizeof(buffer), "%02x", result[i]);
        hash += buffer;
    }
    return hash;
}