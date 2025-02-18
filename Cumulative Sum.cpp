/*Cumulative Sum
https://workat.tech/problem-solving/practice/cumulative-sum
The cumulative sum of an array at index i is defined as the sum of all 
elements of the array from index 0 to index i.

Initial Array: [1, 2, 3, 4]
Cumulative Sum: [1, 3, 6, 10] */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];  
    static int temp = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Output Array elements: ";
    for (int i = 0; i < n; i++) {
        temp += arr[i];
        cout << " " << temp;
    }

    return 0;
}
