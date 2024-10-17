#include<bits/stdc++.h>
using namespace std;


void secondlargest(int arr[],int n)
{
    int secondlargest=0,largest=0;
    
    for(int i=0; i<n;i++){
        if(largest < arr[i]){
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]> secondlargest){
           secondlargest=arr[i];
        }
    }
    cout<< secondlargest;
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
    
  
    secondlargest(arr,n);
}