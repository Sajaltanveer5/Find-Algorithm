#include <iostream>
using namespace std;

// Function to find the index of the target element
int find(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    int index = find(arr, size, target);

    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}