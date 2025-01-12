#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int seconds, minutes, hours;
    cout << "Enter total seconds to find time in hours, minutes and seconds: ";
    cin >> seconds;

    // Formatting the Output

    cout << fixed << right;
    cout.fill('0');

    // storing time in seconds minutes and hours
    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;

    // displaying time
    cout << setw(2) << hours << " : ";
    cout << setw(2) << minutes << " : ";
    cout << setw(2) << seconds << endl;
    return 0;
}