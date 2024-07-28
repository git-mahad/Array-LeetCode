#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,7,7,8,8,10},target,size,i;
    int temp1 = -1 ,temp2 = -1;
    target = 8;
    size = sizeof(arr) / sizeof(arr[0]);
    bool found1 = false;
    bool found2 = false;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == target){
            temp1 = i;
            found1 = true;
            break;
        }
    }
    for(i = size; i > 0; i--)
    {
        if(arr[i] == target){
            temp2 = i;
            found2 = true;
            break;
        }
    }
    cout << "[" << temp1 << "," << temp2 << "]";
    
    return 0;
}