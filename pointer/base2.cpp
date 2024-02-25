#include <iostream>

using namespace std;
int main()
{
    int a = 19;
    int *ptr_a = &a;
    cout << "ptr_a = " << ptr_a << endl;
    cout << "&ptr_a = " << &ptr_a << endl;
    cout << "*ptr_a = " << *ptr_a << endl;
    cout << "*&ptr_a = " << *&ptr_a << endl;
    cout << "&a= " << &a << endl;
    cout << "*&a = " << *&a << endl;
    return 0;
}