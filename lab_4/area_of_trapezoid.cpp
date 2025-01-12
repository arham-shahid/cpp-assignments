#include <iostream>
using namespace std;

int main()
{
    int length1;
    int length2;
    int height;
    cout << "***AREA OF TRAPEZOID***\n\n";

    cout << "Enter the length of side A: ";
    cin >> length1;
    cout << "Enter the length of side B: ";
    cin >> length2;
    cout << "Enter the height: ";
    cin >> height;

    cout << "AREA OF TRAPEZOID = " << (((length1 + length2) / 2 * height)) << endl;
}
