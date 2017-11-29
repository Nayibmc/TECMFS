#ifndef TECMFS_DISKNODE_H
#define TECMFS_DISKNODE_H

#include "DiskBlock.h"

class DiskNode{
public:
    int diskNumber;     //Para mantener la secuenca de discos ordenada ///Talvez no se use
    int diskSizeBytes;
    int blockSizeBits;
    int cantMaxBlocks;

    std::vector<DiskBlock*> blockList;

    DiskNode();
    DiskNode(int diskNumber, float diskSize, float blocksSize);

    //void calcParity();

    const char* getStripeData();
    const char* getParity(int diskNumber);  //Recibe la paridad que se encuentra en el bloque dado

    void sendBlockData();       //Envía a ControllerNode

    void addToBlock();          //Para añadir un nuevo video.
};

#endif //TECMFS_DISKNODE_H
