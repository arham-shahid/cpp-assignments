#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a four digit integer: ";
    cin >> num;
    int originalNum = num; // Copy of original number to find sum at the end

    // Validate input
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    if (count > 4)
        cout << "PLease enter a four digit integer! " << endl;
    else
    {
        // Sum calculation
        int sum,
            firstDigit,
            lastDigit;

        firstDigit = originalNum / 1000;
        lastDigit = originalNum % 10;

        sum = firstDigit + lastDigit;

        cout << "Sum of first and last digit is " << sum << endl;
    }

    return 0;
}