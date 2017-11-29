#ifndef TECMFS_DISKBLOCK_H
#define TECMFS_DISKBLOCK_H

#include <iostream>

class DiskBlock{
public:
    bool parityBlock;
    int blockNumber;    //vertical, lo que usualmente es "A", "B", "C", etc.

    std::string bitData;
    ///metadata, talvez en JSON ///NoSQL

    //DiskBlock();
    DiskBlock(bool parityValue, int blockNumber);
};


#endif //TECMFS_DISKBLOCK_H
