#include <iostream>
using namespace std;
int maxpieces(int n,int a,int b,int c){
    if(n==0) return 0;
    if(n<0) return -1;
    int res= max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));
    if(res==-1) return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cout << "enter the number: ";
    cin >> n;
    cout << "enter the number: ";
    cin >> a;
    cout << "enter the number: ";
    cin >> b;
    cout << "enter the number: ";
    cin >> c;
    cout << "the maximum pieces the log can be cut are: " << maxpieces(n,a,b,c);
}