#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

class DiskBlock{
public:
    bool parityBlock;   //Para ver si ese es un bloque de paridad

    char* data;   //Binario con la información del video
    json metadata;      //Se guarda los metadatos en este JSON

    DiskBlock(bool parityValue);
};


#endif //TECMFS_DISKBLOCK_H