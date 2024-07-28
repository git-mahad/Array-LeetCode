=#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 6};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int var1 = size; 

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            var1 = i;
            break;
        } else if (target < arr[i]) {
            var1 = i;
            break;
        }
    }

    cout << var1;
    
    return 0;
}
