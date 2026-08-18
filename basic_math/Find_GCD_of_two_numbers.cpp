/*
Find GCD of two numbers
*/
#include<iostream>
#include <algorithm>
using namespace std;
int main (){
    int first_no ;
    int second_no;
    int GCD =0;
    cout << "enter the first and second no. :" << endl ;
    cin >> first_no >> second_no; //brute force 
    for(int i =1 ; i <=min(first_no,second_no);i++){
        if(first_no%i==0 && second_no%i==0){
            GCD = i;
        }
    }
    cout << "the Greatest common  factor : " << GCD << endl ; 
    //optimal approach.
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "GCD = " << a;

    return 0;
}