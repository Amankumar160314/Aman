#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if the target is at the mid index
        if (arr[mid] == target)
            return mid;
        
        // If target is smaller, discard the right half
        else if (arr[mid] > target)
            right = mid - 1;
        
        // If target is larger, discard the left half
        else
            left = mid + 1;
    }
    
    // Return -1 if the target is not found
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    els
