#include<iostream>
using namespace std;
int main()
{
    int i, arr[50], n, num, l, h, mid;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter elements in Acs order: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter Element to be Search : ";
    cin>>num;
    l = 0;
    h = 9;
    mid = (l+h)/2;
    while(l <= h)
    {
        if(arr[mid]<num){
            l = mid+1;
        }
        else if(arr[mid]==num)
        {
            cout<<endl;
            cout<<"The number is found at Position : "<<mid+1;
            break;
        }
        else{
            h = mid-1;
        mid = (l+h)/2;
        }
    }
    cout<<endl;
    if(l>h){
        cout<<"The number is not found in given Array";
    }
    cout<<endl;
    return 0;
}