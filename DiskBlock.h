#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class DiskBlock{
public:
    int blockNumber;
    string data;          //Binario con la información del video
    string metadata;

    DiskBlock(string data, int blockNumber);

    void addData(string data);
};


#endif //TECMFS_DISKBLOCK_H