#include <iostream>
#include <algorithm> 
using namespace std;
int maxprofit(int arr[], int start, int end) {
    if (end <= start)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (arr[j] > arr[i]) {
                int currentprofit = (arr[j] - arr[i]) + maxprofit(arr, start, i - 1) + maxprofit(arr, j + 1, end);
                profit = max(profit, currentprofit);
            }
        }
    }
    return profit;
}
int maxprofitefficient(int arr[], int n) {
    int profit = 0;

    // Traverse through the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            // Add the profit of the transaction
            profit += (arr[i] - arr[i - 1]);
        }
    }

    return profit;
}
int main() {
    int arr[] = {1, 5, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array size: " << n << endl; 
    cout << "The maximum profit we can generate in coming days is: " << maxprofit(arr, 0, n - 1) << endl;
    cout << "Array size: " << n << endl; 
    cout << "The maximum profit we can generate in coming days (efficient method) is: " << maxprofitefficient(arr, n) << endl;
    return 0;
}

