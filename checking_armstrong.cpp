#include <iostream>
using namespace std;
int pow(int, int);
int getCount(int);
int main()
{
    int num;//Any value that user inputs 
    int digit = 0;//Breakdown of value into single digits
    int sum = 0;// Calculation of sum of digits raised to power equal to count
    cout << "Enter any number to check if it is an Armstrong number: ";
    cin >> num;
    int count = getCount(num);//
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + pow(digit, count);
    }

    if (num == sum)
    {
        cout << "Entered number is an Armstrong number \n";
    }
    else
        cout << "Entered number is not an Armstrong number \n";
    
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
