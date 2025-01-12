#include <iostream>
using namespace std;

int main()
{
    int num; // Declare an integer variable
    cout << "Enter any number: ";
    cin >> num; // Take input from user and assign the value to the variable

    int originalNum = num; // Copy of num

    num = num * 2; // Double the value of variable and store in the same variable.

    num = num + 10; // Add 10 to the value of variable and store in the same variable.

    num = num / 2; // Now half the value of variable and store in the same variable.

    num = num - originalNum; /*Then subtract the number entered by user from the current value of the
                               variable and store in the same variable.*/

    cout << num << endl; // Finally display the value of the variable. The answer must always be five.

    return 0;
}