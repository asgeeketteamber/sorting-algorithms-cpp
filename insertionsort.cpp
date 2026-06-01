#include<bits/stdc++.h>
using namespace std;
//takes an element and places it in th ecorrect order 
//TC-O(n^2)-avg,worst,best-O(n)
//SC-O(1)

void insertionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
             j--;
        }

    }
}
int main()
{
    int n;
    cout<<"enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr,n);
  
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}