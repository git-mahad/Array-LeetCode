#include <iostream>
using namespace std;

int main() {
    int num[] = {4, 5, 6, 7, 0, 1, 2};
    int target = 9;
    int size;
    size = sizeof(num) / sizeof(num[0]);
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (num[i] == target) {
            cout << i;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << -1;
    }

    return 0;
}
