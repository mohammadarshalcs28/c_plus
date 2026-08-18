/*
Reverse a number
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter the no. :" << endl;
    cin >> a;
    int temp=0;
    while(a>0){
       temp =temp*10 + a%10;
       a/=10;
    }
    cout << "revrese of no.:" << temp;
}