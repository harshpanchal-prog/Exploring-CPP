#include<iostream>
using namespace std;
int main(){
    float r ;
    cout << "Enter Radius of Sphere : ";
    cin >> r ;
    float V ;
    //V = (4/3) * 3.14 * r * r * r ;  WRONG 
    V = (4 * 3.14 * r * r * r) / 3 ;
    cout << "Volume of the Sphere is : " << V << endl ;
}