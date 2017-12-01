#include "DiskBlock.h"

DiskBlock::DiskBlock(string data, int blockNumber){
    this->blockNumber = blockNumber;
    addData(data);
}

void DiskBlock::addData(string data){
    this->data.append(data);
}