#ifndef TECMFS_DISKNODE_H
#define TECMFS_DISKNODE_H

#include "LinkedList.h"
#include "DiskBlock.h"

class DiskNode{
public:
    int diskNumber;     //Para mantener la secuenca de discos ordenada
    int diskSizeBytes;
    int cantBlocks;
    int blockSizeBits;

    LinkedList<DiskBlock*> blockList;

    DiskNode();
    DiskNode(int diskNumber, float diskSize, int cantBlocks);
};

#endif //TECMFS_DISKNODE_H
