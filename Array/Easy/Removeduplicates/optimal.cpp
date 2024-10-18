#include<bits/stdc++.h>
using namespace std;


void Removeduplicates(int arr[], int n){

    if(n==0||n==1){
         cout<<"Array has not duplicates elements";
        return;
    }

    int i=0;
    for(int j=1;j<n;j++){
        
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    for(int j=0;j<=i;j++){
        cout<<arr[j]<<endl;
    }
}
int  main(){
    
     int n;

    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element in array";
         cin>>arr[i];
    }
       
    Removeduplicates(arr,n);
    return 0;
}