#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci(long long int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long int fibonacci(long long int y){
    if(y<=1){
        if(y==1) return y=1;
        if(y<1 and y>=0) return y=0;
    }
    else return fibonacci(y-1) + fibonacci(y-2);
    return 0;
}
