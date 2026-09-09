// take cost and selling price as input, tell it make profit/loss/none and how much.

#include<iostream>
using namespace std;
int main(){
    int CP,SP ;
    cout << "Enter Cost Price of item : " ;
    cin >> CP ;
    cout << "Enter Selling Price of item : " ;
    cin >> SP ;
    int N = SP-CP ;
    if (N>0) cout << "You make a PROFIT of " << N ;
    if (N==0) cout << "You make neither PROFIT nor LOSS" ; 
    if (N<0) cout << "You make a loss of " << -N ;
}