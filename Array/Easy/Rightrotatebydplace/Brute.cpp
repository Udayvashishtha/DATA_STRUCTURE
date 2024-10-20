#include<bits/stdc++.h>
using namespace std;

void Rightrotatebydplace(int arr[],int n,int d){

     if(n==0||n==1){
        cout<<"Cannot rotate by d place";
        return;
     }

     d=d%n;

     int temp[d];
     for(int i=d+1;i<n;i++){
        temp[(i-d)-1]=arr[i];
     }
    
    for(int j=0;j<d;j++){
        arr[d+j]=arr[j];
    }

    for(int k=0;k<d;k++){
        arr[k]=temp[k];
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
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
    Rightrotatebydplace(arr,n,d);
    return 0;
}