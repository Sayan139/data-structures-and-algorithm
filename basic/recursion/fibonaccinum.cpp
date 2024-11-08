#include <iostream>
using namespace std;
int fibrecursion(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else return fibrecursion(n-1) + fibrecursion(n-2);
}
int fib(int n){
    int a = 0;
    int b = 1;
    for(int i=0; i<n; i++){
        int temp = b;
        b = a+b;
        a = temp;
    }
    return a;
}
int main() {
    int n;
    cout << "Enter the position of the Fibonacci number to compute: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " using recursion: " << fibrecursion(n) << endl;
    cout << "Fibonacci number at position " << n << " using iteration: " << fib(n) << endl;

    return 0;
}