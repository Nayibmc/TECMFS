#include "DiskBlock.h"

/*DiskBlock::DiskBlock(){

}*/

DiskBlock::DiskBlock(bool parityValue, int blockNumber){
    this->parityBlock = parityValue;
    this->blockNumber = blockNumber;
}