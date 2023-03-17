#include<iostream>
using namespace std;
int main(){
    int A[50], n;
    int key;
    cout<<"Enter the size of arrya: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(key==A[i]){
            cout<<"Found at: "<<i;
            return 0;
        }
    }
    cout<<"Not found: ";
    return 0;
}