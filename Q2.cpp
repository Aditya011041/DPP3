#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    
    int arr1[n], arr2[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    
    int merged[2*n];
    int i = 0, j = 0, k = 0;
    while (i < n && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n) {
        merged[k++] = arr1[i++];
    }
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    
    int median_index = (2*n - 1) / 2;
    double median = (merged[median_index] + merged[median_index + 1]) / 2.0;
    
    cout << "Median: " << median << endl;
    
    return 0;
}
