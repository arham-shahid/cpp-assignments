#include <iostream>
using namespace std;
int main()
{
int var1=100;
long a = 100;
cout << "\nExplain what is printing here???? \t " << sizeof(var1);
cout << "\nExplain what is printing here???? \t " << &var1;
cout << "\nExplain what is printing here???? \t " << sizeof(&var1);
cout << "\nExplain what is printing here???? \t " << sizeof(a);
cout << "\nExplain what is printing here???? \t " << &a;
cout << "\nExplain what is printing here???? \t " << sizeof(&a);
cout<<endl;
return 0;
}