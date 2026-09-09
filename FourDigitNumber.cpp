#include<iostream>
using namespace std;
int main(){
    cout << "Enter the Number : " ;
    int n ;
    cin >> n ;
    if (n>=1000 and n<=9999) cout << "FOUR digit number." ;
    else cout << "NOT a four digit number." ;
}