#include <iostream>
using namespace std;

int getFactorial(int);

int main()
{
    int n; // Takes input

    cout << "Enter an integer number: ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        int result = getFactorial(n);
        cout << "Factorial of " << n << " = " << result<< endl;
    }
    return 0;
}
int getFactorial(int n)
{
    int factorial = 1; // Initiallize factorial variable but not with 0 because factorial ends with 1
    for (int i = n; i > 0; i--)
    {

        factorial *= i;
    }
    return factorial;
}
