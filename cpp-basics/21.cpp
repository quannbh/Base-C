#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Nhap vao 2 so nguyen de tinh toan: " << endl;
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    cout << "Sum is: " << c << endl;
    cin.ignore();

    cout << "Xin chao, toi co the biet ten ban duoc khong?" << endl;
    string name;
    getline(cin, name);
    cout << "Hello " << name << ". How are you?" << endl;
    return 0;
}