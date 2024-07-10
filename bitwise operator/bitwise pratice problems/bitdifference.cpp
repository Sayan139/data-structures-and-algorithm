#include <iostream>
using namespace std;
int tbl[256];
void initialize(){
    tbl[0]=0;
    for(int i =1; i<256; i++){
        tbl[i] = tbl[i&(i-1)]+1;
    }
}
int countsetbits(int n){
    initialize();
    return tbl[n&255]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)&255];
}
int countsetbitstoflip(int a,int b){
    int x = a^b;
    return countsetbits(x);
}
int main(){
    int a,b;
    cout << "enter the number: ";
    cin >> a;
    cout << "enter the number: ";
    cin >> b;
    cout << "the number of bits need to be changed : " << countsetbitstoflip(a,b);
}