#include <iostream>
using namespace std;
int power(int x,int y){
    if(y==0) return 1;
    int temp = power(x,y/2);
    if(y%2==0){
        return temp * temp;
    }else{
        return x * temp * temp;
    }
}
int main(){
    int a,b;
    cout << "enter the number : ";
    cin >> a;
    cout << "enter the power : ";
    cin >> b;
    cout << "the " << a << " to the power " << b << " is : " << power(a,b);
}