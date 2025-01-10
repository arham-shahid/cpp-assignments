#include <iostream>
using namespace std;
int pow(int, int);
int getCount(int);
int main()
{
    int num;
    int digit = 0;
    int sum = 0;
    cout << "Enter any number to check if it is an Armstrong number: ";
    cin >> num;
    
    int count = getCount(num);
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + pow(digit, count);
    }
    cout<< sum;
    return 0;
}
int getCount(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
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
