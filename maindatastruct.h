#ifndef MAINDATASTRUCT_H
#define MAINDATASTRUCT_H
#include <vector>
#include <string>
#include <ostream>

struct Client
{
    unsigned id;
    std::string name;
    std::string companyName;
    unsigned credit;
    bool isInBase;

    friend std::ostream& operator<<(std::ostream& os, const Client& cl);
};

class mainDataStruct
{
public:
    mainDataStruct();
    mainDataStruct(Client cl);
    void setClients(std::vector<Client> v);
    void getClients() const;
    void checkClient();
    void clearData();
private:
    unsigned clientsCount;
    mutable unsigned getterCount;
    std::vector<Client> clients;
};

#endif // MAINDATASTRUCT_H
