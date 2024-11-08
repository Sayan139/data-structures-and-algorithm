#include <iostream>
#include <map>
using namespace std;
// this is a bruite force approach with tc : O(n^2) so thats pretty bad
int longestSubarrayWithSum(int arr[], int n, int targetSum) {
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if(sum == targetSum) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }

    return maxLen;
}
// better solution  with tc :  O(n) or O(nlogn) depends on type of map you are using sc: O(n) 
// (this applies for both positive and negative)
int getlongestsubarray(vector <int> arr,long long k){
    int n = arr.size();
    unordered_map<long long, int> presum;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen,i+1);
        }
        long long rem = sum - k;
        if(presum.find(rem) != presum.end()){
            int len = i - presum[rem];
            maxlen = max(maxlen,len);
        }
        if(presum.find(sum) == presum.end()){
            presum[sum] = i;
        }
    }
    return maxlen;
}
