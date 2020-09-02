#include <iostream>
#include <maindatastruct.h>
#include <unionfind.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    UF u(10);
    u.unionFind(2, 4);
    u.unionFind(2, 3);
    u.unionFind(9,0);

    return 0;
}
