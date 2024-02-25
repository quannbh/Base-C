#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Nhap vao 2 so nguyen de tinh toan." << endl;
    int a, b;
    float c;
    cout << "Nhap vao so thu nhat: ";
    cin >> a;
    cout << "Nhap vao so thu hai: ";
    cin >> b;
    char operators;
    string operator_name;
    cout << "Nhap vao +, -, *, / , % de tinh toan: ";
    cin >> operators;
    switch (operators)
    {
    case '+':
        c = a + b;
        operator_name = "cong";
        break;
    case '-':
        c = a - b;
        operator_name = "tru";
        break;
    case '*':
        c = a * b;
        operator_name = "nhan";
        break;
    case '/':
        c = (float)a / b;
        operator_name = "chia";
        break;
    case '%':
        c = a % b;
        operator_name = "mod";
        break;
    default:
        operator_name = "khong xac dinh";
        cout << "Input error!" << endl;
        break;
    }
    cout << "Ket qua phep tinh " << operator_name << ": " << c << endl;

    system("pause");
    return 0;
}