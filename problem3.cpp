#include <iostream>
using namespace std;

int findSingle(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }
    return result;
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
    int single = findSingle(arr, n);
    cout << "The single number is: " << single << endl;
    return 0;
}