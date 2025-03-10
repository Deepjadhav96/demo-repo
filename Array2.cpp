//Left Rotate the Array by One
#include<bits/stdc++.h>
using namespace std;
void RotateArray(vector<int> &arr,int n){
    int temp = arr[0];
    for(int i = 1;i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    

}

int main(){
    vector<int> arr = {10,20,30,40};
    int n = arr.size();
    
    RotateArray(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" " ;
    }
    
    return 0;
}