#include <iostream>
using namespace std;
int largestpowerof2inrange(int n){
    int x =0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}
int solution(int n){
    if(n==0){
        return 0;
    }
    int x = largestpowerof2inrange(n);
    int bitsupto2raisex = x * (1<<(x-1));
    int msbfrom2raisexton = n - (1<<x) + 1;
    int rest = n - (1<<x);
    int ans = bitsupto2raisex + msbfrom2raisexton + solution(rest);
    return ans;
}
int main(){
    int n;
    cout << "enter the number till you want calculate bits: ";
    cin >> n;
    cout << "the total num of bits till " << n << " is : " << solution(n) << endl;
}