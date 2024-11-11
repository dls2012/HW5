#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
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
    cout << maxProfit(arr, n);


    return 0;
}
