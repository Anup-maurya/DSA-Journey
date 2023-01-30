#include<iostream>
using namespace std;

int power(int num, int exp){
 if(!exp==0)
 {
    return power(num,exp-1)*num;
 }
 else {
 return 1;
 }
}

int main(){
    int num=2;
    int exp=3;
    cout<<power(num,exp);

}