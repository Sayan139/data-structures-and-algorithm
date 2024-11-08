#include <iostream>
using namespace std;
// bruite force approach
int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]
            int sum = 0;

            //add all the elements of subarray:
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }

    return maxi;
}
// better approach
int maxSubarraySum1(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            // current subarray = arr[i.....j]

            //add the current element arr[j]
            // to the sum i.e. sum of arr[i...j-1]
            sum += arr[j];

            maxi = max(maxi, sum); // getting the maximum
        }
    }

    return maxi;
}
// optimal approach
long long maxsubarraysum(int arr[],int n){
    long long maxi = INT_MIN;
    long long sum = 0;
    for(int i =0; i<n; i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
        }if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
// follow up approach for showing the array
long long maxsubarraysum4(int arr[],int n){
    long long maxi = INT_MIN;
    long long  sum  = 0;
    int start = 0;
    int anstart = -1,ansend= -1;
    for(int i =0; i<n; i++){
        if(sum == 0) start = i;
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            anstart = start;
            ansend = i;
        }
        if(sum  < 0){
            sum = 0;
        }
    }
    cout << "The subarray is: [";
    for (int i = anstart; i <= ansend; i++) {
        cout << arr[i] << " ";
    }
    cout << "]n";
    return maxi;
}