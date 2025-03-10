#include <bits/stdc++.h> 
using namespace std;
//it's an optimal solution that i get from chatgpt. below commented are from striver.
// void bubble_sort(int arr[], int n) {
//     // bubble sort
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j <= i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     } 

void sort012(int *arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 2, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
