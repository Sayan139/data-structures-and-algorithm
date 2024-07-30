#include <iostream>
#include <algorithm> // Include this for the max function
using namespace std;

// Function to calculate maximum profit
int maxprofit(int arr[], int start, int end) {
    // Base case: if the end is less than or equal to start, no profit can be made
    if (end <= start)
        return 0;

    int profit = 0;

    // Traverse through all pairs of days
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            // If buying on day i and selling on day j is profitable
            if (arr[j] > arr[i]) {
                // Calculate current profit
                int currentprofit = (arr[j] - arr[i]) + maxprofit(arr, start, i - 1) + maxprofit(arr, j + 1, end);
                // Update profit if we get a better profit
                profit = max(profit, currentprofit);
            }
        }
    }

    return profit;
}

int main() {
    int arr[] = {1, 5, 3, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array size: " << n << endl; // Debug print to check array size
    cout << "The maximum profit we can generate in coming days is: " << maxprofit(arr, 0, n - 1) << endl;

    return 0;
}

