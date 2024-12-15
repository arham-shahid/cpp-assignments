#include <iostream>
using namespace std;

int main()
{
    char ch=0;
    cout<<"Enter any single character to find its ASCII value: ";
    cin>>ch;
    int asciValue = ch;
    cout<<"The ASCII value of the requested charcter is "<< asciValue <<"."<< endl;
    return 0;
}