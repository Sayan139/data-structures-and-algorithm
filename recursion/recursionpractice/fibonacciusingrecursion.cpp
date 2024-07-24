#include <iostream>
using namespace std;
int fibonacii(int n){
    if(n==0){
        return 0;
    }if(n==1 || n==2){
        return 1;
    }else{
        return fibonacii(n-1)+fibonacii(n-2);
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the " << n << "th number of the fibonacci series is: " << fibonacii(n) << endl;
    cout << "fibonacci series : ";
    for(int i=0; i<=n; i++){
        cout << fibonacii(i) << " ";
    }
}