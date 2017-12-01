#include "DiskBlock.h"

DiskBlock::DiskBlock(){
};

DiskBlock::DiskBlock(string data, int blockNumber){
    this->identifier = blockNumber;
    addData(data);
}

void DiskBlock::addData(string data){
    this->data.append(data);
}