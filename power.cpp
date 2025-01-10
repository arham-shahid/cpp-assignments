#include <iostream>
using namespace std;
int pow(int, int);
int main()
{
    int digit = 0;
    int count = 0;
    cout << "enter any digit: ";
    cin >> digit;
    cout << "enter power to which you want to raise it: ";
    cin >> count;
    int output = pow(digit, count);
    cout << "the output is " << output << endl;

    return 0;
}

int pow(int digit, int count)
{
    int result = 1;
    for (int i = 0; i < count; i++)
    {
        result = result * digit;
    }
    return result;
}
