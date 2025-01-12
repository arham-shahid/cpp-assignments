#include <iostream>
using namespace std;

int main()
{
    double radius;
    const double PI = 3.1415;
    cout << " Enter the radius of circle: ";
    cin >> radius;
    cout << " Circumference of circle is: " << (2 * PI * radius) << endl;

    return 0;
}