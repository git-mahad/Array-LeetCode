/* Positive Cumulative Sum
The cumulative sum of an array at index i is defined 
as the sum of all elements of the array from index 0 to index i.

Initial Array: [1, -2, 3, 4, -6]
Cumulative Sum: [1, -1, 2, 6, 0]
Positive Cumulative Sum: [1, 2, 6] */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin >> n;
    int arr[n];
    
    static int temp = 0;
    cout<<"Enter "<< n << " elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"printing "<<endl;
    for(int i=0; i < n; i++){
        cout << " " << arr[i];
    }
    cout<< " calculating and ansing "<<endl;
    for(int i=0; i < n; i++){
        temp += arr[i];
        if(temp > 0){
            cout << " " << temp;
        }
    }
}