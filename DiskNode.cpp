#include "DiskNode.h"

DiskNode::DiskNode(){

}

DiskNode::DiskNode(int diskNumber, float diskSizeBytes, float blocksSizeBytes){
    this->diskNumber = diskNumber;
    this->cantMaxBlocks = (int)(diskSizeBytes/blocksSizeBytes);

    //Se instancia todos los bloques que el disco puede tener, pero van a estar vacíos
    for (int blockNum = 0; blockNum < cantMaxBlocks; blockNum++){
        //Los bloques de paridad irán subiendo en diagonal desde la esquina inferior izquierda
        if (blockNum + 1 == cantMaxBlocks - diskNumber && cantMaxBlocks - diskNumber > 0)   ///Probar
            this->blockList.addLast(new DiskBlock(true));
        else
            this->blockList.addLast(new DiskBlock(false));
    }
}

const char* DiskNode::getStripeData(){     //Pide

}