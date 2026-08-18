/*
Palindrome Number
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter the no." << "\n";
    cin >> a;
    int b =a ;
    int temp =0;
    while(b>0){
       temp =temp*10 + b%10;
       b/=10;
    }
    cout << temp << endl;
    if (temp == a) cout << "number is palindrome.";
    else cout << "number is not palindrome";
}