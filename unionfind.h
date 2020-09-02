#ifndef UNIONFIND_H
#define UNIONFIND_H
#include<array>

class UF
{
public:
    UF(int n) : N(n) {
        id = new int [N];
        for(int i = 0; i < n; i++)
            id[i] = i;
    };
    void unionFind(int p, int q) {
        unsigned  static counter = 0;
        id[p] = counter;
        id[q] = counter;
        counter++;
    };
    bool connected(int p, int q) {
        if (id[p] == id[q]) {
            return true;
        } else {
            return false;
        }
    };
    int find(int p);
    int count();
private:
    unsigned const N;
    int* id;
};

#endif // UNIONFIND_H
