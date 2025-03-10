//Second largest element and Second smallest element in the array.

#include<bits/stdc++.h>
using namespace std;

int SecondLargest(vector<int> &a,int n)
{

    int largest = a[0];
    int slargest = -1;
    for(int i=1; i<n ; i++)
    {
        if(a[i] > largest )
        {
        slargest = largest;
        largest = a[i];
        }
         else if(a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    
    }

    return slargest;
}
int SecondSmallest(vector<int> &a,int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 1 ; i < n; i++ )
    {
        if(a[i]<smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        
        else if(a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
       
    }
 return ssmallest;
  
}
int main()
{
    
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int result2 = SecondSmallest(arr,n);
    int result = SecondLargest(arr,n);
    cout<<result<<" ";
    cout<<result2<<" ";

    return 0;
}