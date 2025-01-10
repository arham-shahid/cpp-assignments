#include <iostream>
using namespace std;

bool isPrime(int);
int main()
{
    int limit;                // Total prime numbers to display
    int num = 0;              // Current number to check if it is prime number
    int primeNumberCount = 0; // Count of current prime number(s)
    cout << "How many prime numbers do you want to print out from beginning: ";
    cin >> limit;

    while (primeNumberCount <= limit) // until primeNumberCount reaches the limit
    {

        bool res;
        res = isPrime(num);
        if (res)
        {
            cout << num << ',';
            primeNumberCount++;
        }
       
        num++;
    }

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