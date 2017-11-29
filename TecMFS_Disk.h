#ifndef TECMFS_TECMFS_DISK_H
#define TECMFS_TECMFS_DISK_H

#include <iostream>

//Contiene la configuración necesaria para conectar los nodos discos al servidor
class TecMFS_Disk{
public:
    std::string ip_port;
    std::string path;

    void loadXML(const char* xmlName);      //Carga la configuración contenida en el XML
    bool checkDiskSizeAndStripes(float diskSize, int cantBlocks, float newDiskSize, int newCantBlocks);
};


#endif //TECMFS_TECMFS_DISK_H
