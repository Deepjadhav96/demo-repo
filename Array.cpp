#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];

    for (int i = 1; i < n; i++) { // Start from 1 since largest is already arr[0]
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest; // Return the largest element
}
int secondLargest(vector<int> &arr, int n)
{
    
}

int main() {
    vector<int> arr = {10, 20, 5, 30, 25}; // Example input
    int n = arr.size();

    int largest = largestElement(arr, n);
    cout <<"Largest element: "<<largest << endl;

    return 0;
}
