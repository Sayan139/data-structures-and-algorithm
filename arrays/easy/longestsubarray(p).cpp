#include <iostream>
using namespace std;
int getLongestSubarray(vector <int> arr,long long k){
    int n = arr.size();
    int left = 0,right = 0;
    long long sum = arr[0];
    int longestlen = 0;
    while(right < n){
        while(left <= right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            longestlen = max(longestlen,right - left + 1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    return longestlen;
}