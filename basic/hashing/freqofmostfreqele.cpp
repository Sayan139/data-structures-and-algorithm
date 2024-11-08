#include <iostream>
#include <vector>
using namespace std;
// this is the first approach using the binary search method
int bsearch(int target_idx, int k, vector<int> &nums, vector<long> &prefixsum)
{
    int target = nums[target_idx];
    int l = 0;
    int r = target_idx;
    int best_idx = target_idx;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long count = (target_idx - mid + 1);
        long windowsum = count * target;
        long currsum = prefixsum[target_idx] - prefixsum[mid] + nums[mid];
        int ops = windowsum - currsum;
        if (ops > k)
        {
            l = mid + 1;
        }
        else
        {
            best_idx = mid;
            r = mid - 1;
        }
    }
    return target_idx - best_idx + 1;
}
int maxFrequency(vector<int> &nums, int k)
{
    int n = nums.size();
    sort(begin(nums), end(nums));

    vector<long> prefixsum(n);
    prefixsum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + nums[i];
    }

    int res = 0;
    for (int target_idx = 0; target_idx < n; target_idx++)
    {
        res = max(res, bsearch(target_idx, k, nums, prefixsum));
    }
    return res;
}
// this is the more optimized method by using sliding windows
int maxfrequency(vector <int> &arr,int k){
    sort(begin(arr),end(arr));
    int n = arr.size();
    int result = 0;
    int l = 0;
    int currentsum = 0;
    for (int r=0; r<n; r++){
        long target = arr[r];
        currentsum += arr[r];
        while((r-l+1)*target - currentsum > k){
            currentsum -= arr[l];
            l++;
        }
        result = max(result,(r-l+1));
    }
    return result;
}
int main()
{
    vector<int> nums = {1, 2, 4};  // Example input
    int k = 5;  // Maximum operations allowed
    
    int result = maxfrequency(nums, k);
    cout << "Maximum frequency: " << result << endl;

    return 0;
}