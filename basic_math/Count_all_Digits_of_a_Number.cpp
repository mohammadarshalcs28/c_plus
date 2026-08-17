/*
Count all Digits of a Number
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    int count =0;
    cout  << "enter the no.:" << endl;
    cin >> a;
    int cnt = int (log10(a)+1);// this is optimal approach
    while(a>0){
        a= a/10 ; //This is bruat force.
        count++;
    }
    cout << count << endl ;
    cout << cnt ;
}