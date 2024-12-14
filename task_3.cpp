#include <iostream>
using namespace std;
int main()
{
int a;
short x;
a = 10;
x = 15;
cout << "\nValue of Variable \'a\' \t "<<a;
cout << "\nAdress of Variable \'a\' \t " << &a;
cout << "\nSize of Variable \'a\' \t " << sizeof(a);
cout << "\nValue of Variable \'x\' \t " << &x;
cout << "\nSize of Variable \'x\' \t " << sizeof(x);
cout<<endl;
return 0;
}