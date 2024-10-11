#include<bits/stdc++.h>
using namespace std;



string sum2problem(int arr[],int n,int target){

     
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){

            if(arr[i] + arr[j]==target){
                return "true";
            }
        }
    }

    
     return "no";
    
}
int main(){

    int n,target;

    cout<<"enter the size of array";
    cin>>n;

  
  
  int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element in array";
         cin>>arr[i];
    }

    cout<<"enter the target";
    cin>>target;
    cout<<sum2problem(arr,n,target);
}

