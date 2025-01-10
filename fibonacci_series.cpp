#include <iostream>
using namespace std;

void generateFibonacci(int);
int main()
{
    int n;

    cout << "How many terms of Fibonacci series do you want? ";
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter any positive integer: ";
    }
    else
        generateFibonacci(n);

    return 0;
}
void generateFibonacci(int n)
{
    int term1 = 0, term2 = 1, nextTerm = 0;

    for (int i = 0; i < n; i++)
    {
        cout << term1 << " ";
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
}