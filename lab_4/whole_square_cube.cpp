#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int squareValue;
    int cubeValue;
    
    cout << "Enter any two integers" << endl;
    cin >> a >> b;

    int sum = (a + b);

    squareValue = sum * sum;
    cubeValue = sum * sum * sum;

    cout << "Whole square formula value = " << squareValue << endl;
    cout << "Whole cube formula value = " << cubeValue << endl;

    return 0;
}