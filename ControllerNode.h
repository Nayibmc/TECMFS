#ifndef TECMFS_CONTROLLERNODE_H
#define TECMFS_CONTROLLERNODE_H

#include "DiskNode.h"

class ControllerNode{
    int cantDisks;
    float diskSize;
    int cantBlocks;             //Cantidad de bloques en los que se divide cada disco. Igual a cantDisks para que la diagonal tenga la paridad ///
    float blockSizeBits;         //Tamaño de todos los bloques
};


#endif //TECMFS_CONTROLLERNODE_H
