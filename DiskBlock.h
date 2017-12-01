#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class DiskBlock{
public:

    int identifier;
    string data;   //Binario con la información del video
    string metadata;      //Se guarda los metadatos en este JSON
    DiskBlock();
    
};


#endif //TECMFS_DISKBLOCK_H