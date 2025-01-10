#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    int num;
    cout << "Enter any positive integer: ";
    cin >> num;

    bool res;
    res = isPrime(num);

    if (res)
        cout << "Entered number is a prime number\n";
    else
        cout << "Entered number is not a prime number\n";

    return 0;
}

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}
