#include<bits/stdc++.h>
using namespace std;


int largest1(int arr[],int n){
    int largest=arr[0];
      for(int i=0; i<=n;i++){
        if(largest < arr[i]){
            largest=arr[i];
        }
    }

    return largest;
}

int secondlargest(vector<int> &arr,int largest){

    sort(arr.begin(),arr.end());
    int n=arr.size();
    int slargest=0;
   for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            slargest=arr[i];
            break;
        }
   }
 
   return slargest;
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
   
   vector<int> vec(arr, arr+sizeof(arr)/sizeof(arr[0]));
  
   int largest=largest1(arr,n);
    
   cout<<"secondlargest  "<<secondlargest(vec,largest);
}