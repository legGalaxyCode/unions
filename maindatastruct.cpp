#include "maindatastruct.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Client& cl)
{
    os << cl.id << '/' << cl.name << '/' << cl.companyName
       << '/' << cl.credit << "with " << cl.isInBase;
    return os;
}

mainDataStruct::mainDataStruct() : clientsCount(0), getterCount(0), clients(0)
{

}

mainDataStruct::mainDataStruct(Client cl) : clientsCount(0), getterCount(0), clients(0)
{
    clientsCount++;
    clients.push_back(cl);
}

void mainDataStruct::getClients() const
{
    getterCount++;
    for (auto it : clients)
        std::cout << it << std::endl;
}

