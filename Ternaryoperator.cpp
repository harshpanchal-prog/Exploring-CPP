#include<iostream>
using namespace std;
int main(){
    cout << "Enter a number : " ;
    int N ;
    cin >> N ;

    // if (N%2 == 0) cout << "EVEN" ;
    // else cout << "ODD" ;

    //(N%2 == 0) ? cout << "EVEN" : cout << "ODD" ;    // (condition) ? agar sach hua : agar jhoot hua ;      {M1}

    cout << ((N%2 == 0 ? "EVEN" : "ODD")) ;  // {M2}
}