#include<bits/stdc++.h>
using namespace std;
//pushes maximum to the last by adjacent swaps 
//TC-O(n^2)-avg,worst,best-O(n)
//SC-O(1)
void bubblesort(int arr[],int n)
{
    int swapped=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
           
       }
       if(swapped==false)
       break;
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

    bubblesort(arr,n);
  
    cout<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}