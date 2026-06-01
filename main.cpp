#include<bits/stdc++.h>
#include <windows.h>
using namespace std;

void printArray(vector<int>&v)
{
    int maxVal=*max_element(v.begin(),v.end());
    int maxBarWidth=40;
    

    for (int i=0;i<v.size();i++)
    {
        int barWidth=(v[i]*maxBarWidth)/maxVal;
        cout<<"["<<string(barWidth,'#')<<string(maxBarWidth-barWidth,' ')<<"]"<<v[i]<<endl;
        
    }
}
void generateRandomArray(vector<int>&v,int n)
{
    v.resize(n);
    srand(time(0));
    generate(v.begin(),v.end(),[](){
        return rand()%100+1;
    });
}
/*void getUserInput(int arr[],int n)
void showMenu()
bubblesort(int arr,int n)
selectionsort(int arr,int n)
quicksort(int arr,int n)
mergesort(int arr,int n)
*/
void bubblesort(vector <int>&v,int n)
{
    
       
        for(int i=0;i<n;i++)
        {
            bool swapped=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    swapped=true;
                    system("cls"); // ANSI escape code to clear screen
                    printArray(v);
                    Sleep(500);
                    
                }
               
           }
           if(swapped==false)
           break;
        int step=0;
        system("cls");
        cout<<"==bubble sort | step"<<++step<<"==\n"<<endl;
        printArray(v);
        Sleep(500);
       }
    
}
void selectionsort(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
       int min_index=i;
       for(int j=i;j<n;j++)
       {
        if(v[j]<v[min_index])
        min_index=j;
       }
       swap(v[i],v[min_index]);
       system("cls");
       printArray(v);
       Sleep(500);

    }

}
int partition(vector<int>&v,int low,int high)
 {
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(v[i]<=pivot && i<=high)
        {
            i++;
        }
        while(v[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
            swap(v[i],v[j]);
            system("cls");
            printArray(v);
            Sleep(500);
        }
    }
    swap(v[low],v[j]);
    system("cls");
    printArray(v);
    Sleep(500);
    return j;
 }
void quicksort(vector<int>&v,int low,int high)
{
    if(low<high)
    {
        int partition_index=partition(v,low,high);
        quicksort(v,low,partition_index-1);
        quicksort(v,partition_index+1,high);

    }
}

 void merge(vector<int>&v,int low,int mid,int high) 
{
    vector<int>temp;
    int left=low; 
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else{  
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(v[right]);
        right++;
    }
    for (int i=low;i<=high;i++)
    {
        v[i]=temp[i-low];
    }
    system("cls");
    printArray(v);
    Sleep(500);
}
void mergesort(vector<int>&v,int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
}

 

void showMenu(vector<int>&v, int n)
{
    cout<<"\n====SORTING VISUALIZER===="<<endl;
    cout<<"1.bubble sort"<<endl;
    cout<<"2.selection sort"<<endl;
    cout<<"3.merge sort"<<endl;
    cout<<"4.quick sort"<<endl;
    cout<<"5.EXIT"<<endl;
    cout<<"enter you choice:"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
        bubblesort(v,n);
        printArray(v);
        break;

        case 2:
        selectionsort(v,n);
        printArray(v);
        break;

        case 3:
        mergesort(v,0,n-1);
        printArray(v);
        break;

        case 4:
        quicksort(v,0,n-1);
        printArray(v);
        break;

        case 5:
        cout<<"exiting..."<<endl;
        break;
    }
}
int main()
{
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    vector<int>v;
    generateRandomArray(v,n);
    printArray(v);
    showMenu(v,n);
    return 0;
    char again;
    do{
        generateRandomArray(v,n);
        printArray(v);
        showMenu(v,n);
        cout<<"\nSort Again?(Y/N):";
        cin>>again;
    }while(again=='Y' || again=='y');
    return 0;
}

