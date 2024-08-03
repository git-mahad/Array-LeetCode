#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to swap two elements in an array
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to generate all permutations using backtracking
void permute(int arr[], int start, int end) {
    if (start == end) {
        printArray(arr, end + 1);
    } else {
        for (int i = start; i <= end; ++i) {
            swap(arr[start], arr[i]);
            permute(arr, start + 1, end);
            swap(arr[start], arr[i]); // backtrack
        }
    }
}

int main() {
    int nums1[] = {1, 2, 3};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    cout << "Permutations of [1, 2, 3]:" << endl;
    permute(nums1, 0, n1 - 1);
    
    int nums2[] = {0, 1};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << "Permutations of [0, 1]:" << endl;
    permute(nums2, 0, n2 - 1);

    int nums3[] = {1};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    cout << "Permutations of [1]:" << endl;
    permute(nums3, 0, n3 - 1);

    return 0;
}
