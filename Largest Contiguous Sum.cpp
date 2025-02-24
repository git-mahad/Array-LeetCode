/*Largest Contiguous Sum
https://workat.tech/problem-solving/practice/largest-contiguous
*/

#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;

    // Take input for array size
    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    // Take input for array elements
    cout << "Enter " << n << " elements for array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Elements of the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max_sum = INT_MIN, current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];
        
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
        
        if(current_sum < 0){
            current_sum = 0;
        }
    }

    cout << "Largest Contiguous Sum: " << max_sum << endl;

    return 0;
}
