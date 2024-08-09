#include <iostream>
using namespace std;
//problem type 1
int countnum(int n){
    int count=0;
    while (n>0){
        n = n/10;
        count ++;
    }
    return count;
}
//problem type 2 (Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly. )
int evenlyDivides(int n){
    int num = n;
    int count=0;
    while(n>0){
        int temp = n%10;
        if(temp!=0 && num%temp==0)count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    cout << countnum(n) << endl;
    cout << evenlyDivides(n) << endl;
}