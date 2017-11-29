#include "TecMFS_Disk.h"

void TecMFS_Disk::loadXML(const char* xmlName){
    //Se carga XML y se cambia this->ip_port y this->path
}

bool TecMFS_Disk::checkDiskSizeAndStripes(float diskSize, int cantBlocks, float newDiskSize, int newCantBlocks){
    if (diskSize != newDiskSize || cantBlocks != newCantBlocks)
        return true;
    return false;
}