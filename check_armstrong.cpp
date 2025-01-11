#include <iostream>
using namespace std;

int pow(int, int); // Power function prototype
int getCount(int); // Count function protoype
int isArmstrong(int);

int main()
{
    int num; // Any value that user inputs
    
    cout << "Enter any number to check if it is an Armstrong number: ";
    cin >> num;

    // Checking if sum is same as num
    if (isArmstrong(num) == num)
    {
        cout << "Entered number is an Armstrong number \n";
    }
    else
    {
        cout << "Entered number is not an Armstrong number \n";
    }
    return 0;
}

    int isArmstrong(int num)
{       
    int digit = 0; // Breakdown of value into single digits
    int count = getCount(num); // Number of digits in user's input
    int totalSum = 0;// Calculation of sum of digits raised to power equal to count

    // Calculating sum
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        totalSum = totalSum + pow(digit, count);
    }
    return totalSum;

}

// Function to determuine the number of digits in user's input
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

// Function to raise the digit to power equal to count
int pow(int digit, int count)
{
    int result = 1;
    for (int i = 0; i < count; i++)
    {
        result = result * digit;
    }
    return result;
}
