#include <iostream>
using namespace std;
int main()
{
char s[100];
int i;
cout << "\nEnter a string: ";
gets(s);
for(i = 0; s[i] != '\0'; ++i);
cout << "\nLength of string : " << i;
cout << endl;
return 0;
}