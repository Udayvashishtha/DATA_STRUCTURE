#include<bits/stdc++.h>
using namespace std;

void Leftrotatebydplace(int arr[],int n,int d){

    if(n==0||n==1){
        cout<<"cannot be rotate";
        return;
    }
    d=d%n;

    int temp[d];
    for(int i=0;i<d;i++){
         temp[i]=arr[i];
    }

    for(int j=d;j<n;j++){
        arr[j-d]=arr[j];
    }

    for(int k=n-d;k<n;k++){

        arr[k]=temp[k-(n-d)];

    }
    
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
    int d;
    cout<<"enter the how much time";
    cin>>d;
    Leftrotatebydplace(arr,n,d);
    return 0;
}