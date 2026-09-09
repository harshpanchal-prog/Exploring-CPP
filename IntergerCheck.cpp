//take a real number as input and check whether it is INTEGER or not.

#include<iostream>
using namespace std;
int main(){
    float N ;
    cout << "Enter a real number : " ;
    cin >> N ;
    if ( (int)N == N ) cout << "It is an INTEGER" ;
    else cout << "NOT an INTEGER" ;
}