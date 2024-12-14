#include <iostream>
using namespace std;
int main()
{
    double sales, companySales, salesPercentage;
    companySales = 0;

    cout << "Enter the total amount of sales you made this year: ";
    cin >> sales;

    cout << "Enter the sales percentage made by the major company: ";
    cin >> salesPercentage;

    companySales = sales * salesPercentage / 100;

    cout << "the taotl sales made by the major company out of the total sales is " << companySales << endl;

    return 0;
}
