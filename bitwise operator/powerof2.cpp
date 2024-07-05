#include <iostream>
using namespace std;
bool ispow2(int n){
    if(n==0){
        return 0;
    }
    return ((n&(n-1))==0);
}
//one liner answer
bool ispow2oneline(int n){
    return (n && ((n&(n-1))==0));
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(ispow2oneline(n)){
        cout << "yes";
    }else{
        cout << "no";
    }
}