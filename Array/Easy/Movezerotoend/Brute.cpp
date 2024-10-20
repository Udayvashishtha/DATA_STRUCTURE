#include<bits/stdc++.h>
using namespace std;


void Movezerotoend(int arr[],int n){


    if(n==0|| n==1){
         cout<<"Cannot be move";
         return;
    }
    vector<int>temp;

  
    for(int i=0;i<n;i++){
        
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    int nm=temp.size();

    for(int i=0;i<nm;i++){
        arr[i]=temp[i];
    }

    for(int j=nm;j<n;j++){
        arr[j]=0;
    }
   
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
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

  
    Movezerotoend(arr,n);
    return 0 ;

}