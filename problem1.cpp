#include <iostream>
using namespace std;
int sumOfMultiplication(int arr1[], int arr2[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n];
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int result = sumOfMultiplication(arr1, arr2, n);
    cout << result << endl;

    return 0;
}
