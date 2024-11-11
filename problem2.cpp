#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findDivisor(int arr[], int n) {
    bubbleSort(arr, n);
    int candidate = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] % candidate != 0) {
            return -1;
        }
    }
    return candidate;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int res = findDivisor(arr, n);
    if (res == -1) {
        cout << "-1" << endl;
    }
    else {
        cout << res << endl;
    }
    return 0;
}