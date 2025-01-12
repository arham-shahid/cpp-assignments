#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter any number to find its binary value: ";
    cin >> num;
    // while (num > 0)
    // {
    //     int binary = 0;
    //     binary = num % 2 == 0 ? 0 : 1;
    //     cout << binary;
    //     num = num / 2;

    // }

    int power = 1;
    while (power <= num)
    {
        power = power * 2;
    }
    power = power / 2;

    while (power > 0)
    {
        if (num >= power)
        {
            cout << '1';
            num = num - power;
        }
        else
        {
            cout << '0';
        }
        power = power / 2;
    }
}
