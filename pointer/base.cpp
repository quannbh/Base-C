#include <iostream>

using namespace std;
int main()
{
    void *p;
    int a = 2, *pt;
    p = (void *)&a;
    pt = (int *)p;
    *pt += 3; // a = 5
    cout << &pt << endl;
    
    return 0;
}