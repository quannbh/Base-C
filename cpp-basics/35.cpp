#include <iostream>

using namespace std;

int main(){
    int i = 5, y;

    y = 2 * i++ +2 * ++i;
    cout << y << endl;
    return 0;
}