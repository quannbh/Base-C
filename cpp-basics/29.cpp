#include <iostream>

using namespace std;
int main(){
    int n;
    float sum;
    cout << "Enter n: ";
    cin >> n;
    sum = (float)n * (n+1) /2;
    cout << "Sum of 1 to " << n << ": " << sum << endl;
    return 0;
}