#include "TecMFS_Disk.h"

void TecMFS_Disk::loadXML(const char* xmlName){
    tinyxml2::XMLDocument doc;
    doc.LoadFile(xmlName);
    tinyxml2::XMLElement *config = doc.FirstChildElement();
    this->ip=config->FirstChildElement("ip")->GetText();
    this->path=config->FirstChildElement("path")->GetText();
    this->controller_port=std::stoi(config->FirstChildElement("port")->GetText());
}

bool TecMFS_Disk::checkDiskSizeAndStripes(float diskSize, int cantBlocks, float newDiskSize, int newCantBlocks){
    if (diskSize != newDiskSize || cantBlocks != newCantBlocks)
        return true;
    return false;
}

void TecMFS_Disk::saveBlock(string jsonString) {
    DiskBlock block;
    json jsonData = json::parse(jsonString);

    block.data = jsonData["data"];
    block.metadata = jsonData["metadata"];
    block.identifier = jsonData["identifier"];
}
