#include <iostream>

using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to reverse the elements of an array from index start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to find the next permutation of the given array
void nextPermutation(int arr[], int n) {
    int i = n - 2;
    // Find the first decreasing element from the end
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        // Find the element just larger than arr[i] from the end
        while (arr[j] <= arr[i]) {
            j--;
        }
        // Swap these two elements
        swap(arr[i], arr[j]);
    }
    // Reverse the subarray from i+1 to the end
    reverse(arr, i + 1, n - 1);
}

int main() {
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    nextPermutation(nums, n);

    cout << "Next permutation: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
