#include<bits/stdc++.h>
using namespace std;
//divides and merges]
//TC-O(NlogN)-avg,best,worst
//SC-O(n))
void merge(int arr[],int low,int mid,int high);
void mergesort(int arr[],int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(int arr[],int low,int mid,int high) 
{
    vector<int>temp;
    int left=low; 
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{  
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
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
    mergesort(arr,0,n-1);
  
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}