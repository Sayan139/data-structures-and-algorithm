#include <iostream>
using namespace std;
unsigned int getfirstsetbit(int n){
    return log2(n&-n)+1;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "position of the first set bit is: " << getfirstsetbit(n);
}