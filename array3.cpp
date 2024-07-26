
#include <iostream>
using namespace std;

int main() {
    int ar[] = {-1,2,1,-4};
    int target = 1, size, i, temp;
    size = sizeof(ar) / sizeof(ar[0]);
    temp = size - 2;
    for(i = 0; i < temp; i++)
    {
        if(ar[i] + ar[i + 1]+ ar[i + 2] <= target)
        {
            cout << ar[i] + ar[i + 1]+ ar[i + 2];
        }
        else
        {
            cout<<"0";
        }
    }
}