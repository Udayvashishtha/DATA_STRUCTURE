#include<bits/stdc++.h>
using namespace std;


void leftRotatebyoneplace(int arr[],int n){

    if(n==0||n==1){
        cout<<"cannot be rotate";
        return;
    }

    int temp=arr[0];

    for(int i=1;i<=n;i++){

        arr[i-1]=arr[i];
    }

    arr[n-1]=temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    
    int n;

    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element in array";
         cin>>arr[i];
    }

    leftRotatebyoneplace(arr,n);

}