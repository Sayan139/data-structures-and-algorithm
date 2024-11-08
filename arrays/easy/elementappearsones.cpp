#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force Approach
// Time Complexity: O(n^2)
int bruteForceElementAppearOnes(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int target = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == target) count++;
        }
        if (count == 1) return target; // Return if count is 1
    }
    return -1; // Return -1 if no unique element is found
}

// Fixed Size Array Approach (for positive integers)
// Time Complexity: O(n)
int fixedSizeArrayElementAppearOnes(vector<int> arr) {
    int n = arr.size();
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]); // Find maximum value
    }

    if (maxi >= 0) {
        vector<int> hash(maxi + 1, 0); // Create hash array
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++; // Count occurrences
        }
        for (int i = 0; i < n; i++) {
            if (hash[arr[i]] == 1) return arr[i]; // Return first unique
        }
    }
    return -1; // Return -1 if no unique element is found
}

// Using unordered_map Approach
// Time Complexity: O(n)
int unorderedMapElementAppearOnes(vector<int> arr) {
    unordered_map<int, int> freq; // Frequency map
    for (int num : arr) {
        freq[num]++; // Count occurrences
    }
    for (int num : arr) {
        if (freq[num] == 1) return num; // Return first unique
    }
    return -1; // Return -1 if no unique element is found
}

// Optimal Approach using XOR
// Time Complexity: O(n)
int optimalApproach(vector<int> arr) {
    int sol = 0; // Initialize solution to 0
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        sol ^= arr[i]; // XOR operation
    }
    return sol; // Return the unique element
}

// Main function to demonstrate the different approaches
int main() {
    vector<int> arr = {4, 5, 1, 2, 0, 4, 1, 2}; // Sample array with 0 as a unique element

    int result1 = bruteForceElementAppearOnes(arr);
    cout << "Brute Force: First unique element: " 
         << (result1 != -1 ? to_string(result1) : "No unique element found") << endl;

    int result2 = fixedSizeArrayElementAppearOnes(arr);
    cout << "Fixed Size Array: First unique element: " 
         << (result2 != -1 ? to_string(result2) : "No unique element found") << endl;

    int result3 = unorderedMapElementAppearOnes(arr);
    cout << "Unordered Map: First unique element: " 
         << (result3 != -1 ? to_string(result3) : "No unique element found") << endl;

    int result4 = optimalApproach(arr);
    cout << "Optimal Approach (XOR): First unique element: " << result4 << endl;

    return 0;
}
