#include <iostream>
using namespace std;

int main() {
    int target = 9;
    int num[] = {2, 7, 11, 15};
    int num_size = sizeof(num) / sizeof(num[0]); 
    for (int i = 0; i < num_size - 1; ++i) { 
        if (num[i] + num[i + 1] == target) {
            cout << "[" << i << "," << i + 1 << "] "; 
        } else {
            num[i] = num[i + 1];
        }
    }

    cout << endl; 

    return 0;
}
