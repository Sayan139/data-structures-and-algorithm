#include <iostream>
using namespace std;
bool ispalindrome(string str,int start,int end){
    if(start>=end) return true;
    return (str[start]==str[end] && ispalindrome(str,start+1,end-1));
}
int main(){
    string n;
    cout << "enter the string : ";
    cin >> n;
    int end = (n.length())-1;
    if(ispalindrome(n,0,end)){
        cout << "yes";
    }else{
        cout << "no";
    }
}