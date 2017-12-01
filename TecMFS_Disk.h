#ifndef TECMFS_TECMFS_DISK_H
#define TECMFS_TECMFS_DISK_H

#include <iostream>
#include "tinyxml2.h"
#include "DiskBlock.h"
#include <iostream>
#include <vector>

using namespace std;

//Contiene la configuración necesaria para conectar los nodos discos al servidor
class TecMFS_Disk{
public:
    std::string ip;
    int controller_port;
    std::string path;
    string parity;
    vector<DiskBlock> vectorBlock;

    void saveBlock(string jsonString);
    void loadXML(const char* xmlName);      //Carga la configuración contenida en el XML
};


#endif //TECMFS_TECMFS_DISK_H
