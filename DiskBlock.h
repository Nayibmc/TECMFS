#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class DiskBlock{
public:
    int identifier;
    string data;          //Binario con la información del video
    string metadata;

    DiskBlock();
    DiskBlock(string data, int identifier);

    void addData(string data);
};


#endif //TECMFS_DISKBLOCK_H