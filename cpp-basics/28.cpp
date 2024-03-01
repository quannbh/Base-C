#include <iostream>
using namespace std;

void area(){
    float b,h;
    cout << "Input b: ";
    cin >> b;
    cout << "Input h: ";
    cin >> h;

    float area = (b*h) /2;
    cout << "Area = " << area << endl;
}

int main(){
    area();
    return 0;
}