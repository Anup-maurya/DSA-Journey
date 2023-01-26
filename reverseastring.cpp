// C++ Program to reverse an string
#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    string s="I am Anup Maurya";
    int m=s.length();
    for(int i=m;i>0;i--){
     cout<<s[i-1];
    }

    return 0;
}