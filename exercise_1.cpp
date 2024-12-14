#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d; // Varaible to store values

    int n = 4; // Number of values/variables
    // n = 4;

    int sum = 0;
    int avg = 0;

    cout << "Enter first value: " << endl;
    cin >> a;

    cout << "Enter second value: " << endl;
    cin >> b;

    cout << "Enter third value; " << endl;
    cin >> c;

    cout << "Enter fourth value: " << endl;
    cin >> d;

    sum = a + b + c + d;
    avg = sum / n;

    cout << "The Average is equal to: " << avg << endl;

    return 0;
}