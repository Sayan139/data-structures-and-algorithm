#include <iostream>
using namespace std;
//brian karningams's algorithm method
int countsetbits1(int n){
    int res=0;
    while(n>0){
        n=n&(n-1);
        res++;
    }
    return res;
}
//look up table method using brain karningam's algorithm
int tbl[256];
void initialize(){
    tbl[0]=0;
    for(int i=1; i<256; i++){
        tbl[i] = tbl[i & (i-1)] + 1;
    }
}
int countsetbits2(int n){
    return tbl[n&255]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)&255];
}
int main(){
    initialize();
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << "the num of set bits is: " << countsetbits1(n) << endl;
    cout << "the num of set bits is: " << countsetbits2(n) << endl;
}