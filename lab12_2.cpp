#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int i,int j){
    if(i%j==0) return j;
    else return gcd(j, i%j);
    return 0;
}
