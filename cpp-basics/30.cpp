#include <iostream>
#include <cmath>

using namespace std;

void root()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    float r1, r2;
    r1 = float(-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = float(-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "R1 = " << r1 << "\nR2 = " << r2 << endl;
}
int main()
{
    root();
    return 0;
}