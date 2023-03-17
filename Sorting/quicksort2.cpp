#include<iostream>
using namespace std;

int partition(int *arr,int low,int high)
{
    int left,right,pivot_item;
    pivot_item=arr[low];
    left=low;
    right=high;
    while(left<right)
    {
        while(arr[left]<=pivot_item)
        {
            left++;
        }
        while(arr[right]>pivot_item)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
        }
    }
    arr[low]=arr[right];
    arr[right]=pivot_item;
    return right;
}

void Quick_Sort(int *arr,int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=partition(arr,low,high);
        Quick_Sort(arr,low,pivot-1);
        Quick_Sort(arr,pivot+1,high);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Quick_Sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
