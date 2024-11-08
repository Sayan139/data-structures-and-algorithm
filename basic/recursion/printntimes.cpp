#include <iostream>
using namespace std;
void printntimes(int n){
    if(n==0) return;
    else {
        cout << "bang! ";
        printntimes(n-1);
    }
}
int main(){
    int n;
    cout << "enter the value: ";
    cin >> n;
    printntimes(n);
}