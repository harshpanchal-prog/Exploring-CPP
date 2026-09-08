#include<iostream>
using namespace std;
int main(){
    int x = 10 ;
    x++ ;
    cout << x << endl ;  //11
    cout << x++ << endl ;   //11
    cout << x << endl ;  //12
    cout << ++x << endl ;  //13
    cout << x << endl ;  //13
    ++x ;
    cout << x << endl ;  //14
    cout << endl ;
    int y = 10 ;
    y-- ;
    cout << y << endl ;  //9
    cout << y-- << endl ;  //9
    cout << y << endl ;  //8
    cout << --y << endl ;  //7
    cout << y << endl ;   //7
    --y ;
    cout << y << endl ;   //6      
} 