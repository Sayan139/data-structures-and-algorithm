#include <iostream>
using namespace std;
int posofrightmostdiffbit(int m,int n){
    if(m==n) return -1;
    int x = m^n;
    return log2(x&-x)+1;
}
int main(){
    int m,n;
    cout << "enter the number: ";
    cin >> m;
    cout << "enter the number: ";
    cin >> n;
    cout << "position of the right most diff bit : " << posofrightmostdiffbit(m,n) << endl;
}