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

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
    int arr[]={ 9, 4, 8, 3, 7, 1, 6, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Quick_Sort(arr, 0, size-1);
    cout << "Sorted array: ";
	printArray(arr, size);
    
    return 0;
}
