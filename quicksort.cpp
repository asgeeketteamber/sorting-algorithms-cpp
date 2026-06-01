#include<bits/stdc++.h>
using namespace std;
//pick a pivot and place it in it's correct position 
//TC-O(NlogN)-avg,best,worst-O(n^2)
//SC-O(1)
int partition(int arr[],int low,int high);
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int partition_index=partition(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);

    }
}
 int partition(int arr[],int low,int high)
 {
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
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
    quicksort(arr,0,n-1);
  
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


