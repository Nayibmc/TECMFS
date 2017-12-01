#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

class DiskBlock{
public:

    int identifier;
    char* data;   //Binario con la información del video
    json metadata;      //Se guarda los metadatos en este JSON
    
};


#endif //TECMFS_DISKBLOCK_H