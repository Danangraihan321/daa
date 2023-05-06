#include <iostream>
using namespace std;

// fungsi sequential search
int seqSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = { 2, 3, 6, 8, 10 };
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = seqSearch(arr, n, x);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}
