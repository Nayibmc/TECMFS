#include "DiskNode.h"

DiskNode::DiskNode(){

}

DiskNode::DiskNode(int diskNumber, float diskSizeBytes, int cantBlocks){
    this->diskNumber = diskNumber;

    for (int blockNum = 1; blockNum <= cantBlocks; blockNum++){
        if (blockNum - 1 == cantBlocks - diskNumber && cantBlocks - diskNumber > 0)    //Los bloques de paridad irán en subiendo en diagonal desde la esquina inferior izquierda
            this->blockList.addLast(new DiskBlock(true, blockNum+1));
        else
            this->blockList.addLast(new DiskBlock(false, blockNum+1));
    }
}