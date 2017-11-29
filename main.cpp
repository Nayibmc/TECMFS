#include <iostream>

#include "TecMFS_Disk.h"
#include "DiskNode.h"
//#include "TCPClient"

DiskNode* disk;
//TCPClient diskClient

//Se va a crear el disco y conectarlo con el ControllerNode
int main(){
    TecMFS_Disk diskConfig;     //Va a guardar atributos necesarios para la conexión
    diskConfig.loadXML("");  ///Se carga la configuración desde el XML
    ///diskClient...     Se inicializa

    //Quien "cree" el disco decide su tamaño y la cantidad de bloques que va a tener
    float newDiskSize = 64;
    float newBlockSize = 8;

    ///Se pide al servidor principal la cantidad de discos existentes, el tamaño de los discos, y la cantidad de stripes
    ///Se parsea y se agrega el valor a las siguientes tres variables:
    /*int diskNumber = ;
    float diskSize = ;
    int cantBlocks = ;
    if (diskConfig.checkDiskSizeAndStripes(diskSize, cantBlocks, newDiskSize, newCantBlocks)){
        disk = new DiskNode(diskNumber, newDiskSize, newCantBlocks);
        }
    */

    ///Cosas de servidor///
}