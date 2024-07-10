#include <iostream>
using namespace std;
int revereseofoddandevenposition(int n){
    int odds = (n & 0xAAAAAAAA);
    int evens = (n & 0x55555555);
    odds <<= 1;
    evens >>= 1;
    int result = odds | evens ;
    return result;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the number after reversing the odd and even psitons : " << revereseofoddandevenposition(n);
}