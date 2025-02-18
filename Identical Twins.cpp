/* Identical Twins
https://workat.tech/problem-solving/practice/identical-twins
For an array of integers nums, an identical twin is defined as pair (i, j) where 
nums[i] is equal to nums[j] and i < j.

Array: [1, 2, 3, 2, 1]
Number of Identical Twins: 2
Explanation:
Identical Twins: [[1, 1], [2, 2]]
Indexes: (0, 4), (1, 3) */

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
    
    cout<<endl<< " calculating and ansing "<<endl;
    for(int i=0; i < n; i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                temp++;
                cout<< "[" << arr[i] << "," << arr[j] << "]"<<endl;
            }
            cout << "(" << i << ","<< j << ")"<< endl;
        }
    }
    cout <<endl << " total: " << temp;
}