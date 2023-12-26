#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int y){
    if(y<=1){
        if(y==1) return y=1;
        if(y<1 and y>=0) return y=0;
    }
    else return fibonacci(y-1) + fibonacci(y-2);
    return 0;
}
