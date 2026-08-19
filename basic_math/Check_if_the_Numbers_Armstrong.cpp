/*
Check if the Number is Armstrong.
*/
#include<iostream>
#include<string>
using namespace std;
int main (){
    int a;
    int sum=0;
    cout << "enter the no. :" << endl;
    cin >> a;
    int k = to_string(a).length();
    int b=a;
    while(b!=0){
        int temp=b%10;
        b=b/10;
        sum=sum+pow(temp,k);
    }
    if (a==sum) cout <<"number is armstrong.";
    else cout << "number is not armstrong.";
}