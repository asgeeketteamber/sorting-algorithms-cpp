#include<bits/stdc++.h>
using namespace std;
//select minimums and swap.
//TC-O(n^2)-avg,worst,best
//SC-O(1)

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
       int min_index=i;
       for(int j=i;j<n;j++)
       {
        if(arr[j]<arr[min_index])
        min_index=j;
       }
       swap(arr[i],arr[min_index]);

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
    selectionsort(arr,n);
  
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
