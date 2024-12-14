#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    short b = 10;
    long c = 10;
    float d = 10.0;
    double e = 10.0;
    long double f = 10.0;
    bool g = true;
    cout << "value of Integer a is: " << a << " size is : " << sizeof(a) << endl;
    cout << "value of short c is: " << b << " size is : " << sizeof(b) << endl;
    cout << "value of long c is: " << c << " size is : " << sizeof(c) << endl;
    cout << "size of integer Literal is 10 and its size is : " << sizeof(10) << endl;
    cout << "value of Float d is: " << d << " size is : " << sizeof(d) << endl;
    cout << "value of double e is: " << e << " size is : " << sizeof(e) << endl;
    cout << "value of long double f is: " << f << " size is : " << sizeof(f) << endl;
    cout << "size of Float Literal is 10.0 and its size is : " << sizeof(10.0) << endl;
    cout << "value of boolean g is: " << g << " size is : " << sizeof(g) << endl;
    cout << "size of boolean literal \"true\" is : " << sizeof(true) << endl;
    cout << "size of literal character \'A\' is : " << sizeof('A') << endl;
    cout << "size of string literal \"A\" is  : " << sizeof("A") << endl;
    return 0;
}