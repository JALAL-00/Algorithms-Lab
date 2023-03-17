#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    int Swap=0,com=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            com++;
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                Swap++;
            }
        }
    }
    cout<<"swap occurs :"<<Swap<<endl;
    cout<<"Comparison occurs :"<<com<<endl;
}
int main()
{
    int arr[]={5,4,3,2,1};
    cout<<"Not sorted : "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
        BubbleSort(arr,5);
        cout<<"Sorted : "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
}