#include <iostream>
using namespace std;

int select(int arr[], int i, int n)
{
    int min = i;
    for (int j = i + 1; j < n; j++)  // Start from i + 1 and go up to n
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }
    return min;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = select(arr, i, n);
        // Swap the found minimum element with the first element
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
