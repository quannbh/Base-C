#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float areaOfTriangle()
{
    float a, b, h;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;
    a = 1.0 / 2.0 * b * h;
    return a;
}

float perimeterOfRectangle()
{
    float p, l, b;
    cout << "l = ";
    cin >> l;
    cout << "b = ";
    cin >> b;
    p = 2 * (l + b);
    return p;
}

float sumOfNTerms()
{
    float s, n;
    cout << "n = ";
    cin >> n;
    s = n * (n + 1) / 2;
    return s;
}

float nTermOfapSeries()
{
    float t, a, n, d;
    cout << "a = ";
    cin >> a;
    cout << "n = ";
    cin >> n;
    cout << "d = ";
    cin >> d;
    t = a + (n - 1) * d;
    return t;
}

float rootOfQuadraticEg()
{
    float r, b, a, c;
    cout << "b = ";
    cin >> b;
    cout << "a = ";
    cin >> a;
    cout << "c = ";
    cin >> c;
    r = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    return r;
}

float speed()
{
    float s, v, u, a;
    cout << "v = ";
    cin >> v;
    cout << "u = ";
    cin >> u;
    cout << "a = ";
    cin >> a;
    s = (pow(v, 2) - pow(u, 2)) / (2 * a);
    return s;
}

void program_function()
{
    bool con = true;
    char choice;
    float result;
    cout << "WELCOME TO THE LIBRARY OF MATHEMATICS" << endl;
    while (con)
    {
        cout << "Now you can choose one of this to calculate: " << endl;
        cout << "1. Area of Triangle.\n2. Perimeter of Rectangle.\n3. Sum of n terms.\n4. n term of AP Series.\n5. Root of Quadratic Eg.\n6. Speed.\nq/quit. Quit the program" << endl;
        cout << "Your choice is: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            result = areaOfTriangle();
            cout << "Result of area of triangle is: " << result << endl;
            break;
        case '2':
            result = perimeterOfRectangle();
            cout << "Result of perimeter of rectangle is: " << result << endl;
            break;
        case '3':
            result = sumOfNTerms();
            cout << "Result of sum of n terms is: " << result << endl;
            break;
        case '4':
            result = nTermOfapSeries();
            cout << "Result of n term of a series is: " << result << endl;
            break;
        case '5':
            result = rootOfQuadraticEg();
            cout << "Result of root of quadratic eg is: " << result << endl;
            break;
        case '6':
            result = speed();
            cout << "Result of speed is: " << result << endl;
            break;
        case 'q' || 'Q':
            con = false;
            break;
        default:
            break;
        }
        cout << "\n";
    }
}

int main()
{
    program_function();
    system("pause");
    return 0;
}
