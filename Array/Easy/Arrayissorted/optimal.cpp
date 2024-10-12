#include<bits/stdc++.h>
using namespace std;


string issorted(int arr[],int n){

     for(int i=1;i<n;i++){
        
        if(arr[i]>=arr[i-1]){
         
        }
        else{
            return "false";
        }
     }

     return "yes";

  
}
int   main(){
    
    int n;
    cout<<"enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element";
        cin>>arr[i];
    }

    cout<<issorted(arr,n);

    return 0;
}