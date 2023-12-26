#include<iostream>

using namespace std;

void mySwap(int &,int &); 

int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &i,int &j){
    int diff;
    diff = i-j;
    if(diff<0){
        i+=((diff)*(-1));
        j+=(diff);
    }
    if(diff>0){
        i+=(diff);
        j+=((diff)*(-1));
    }
}
