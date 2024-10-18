#include<bits/stdc++.h>
using namespace std;



void  Removeduplicates(int arr[],int n){

     
     if(n==0||n==1){
        cout<<"Array has not duplicates elements";
        return;
     }
    set<int>st;

    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    
    int ind=0;
    for(auto it :st){
        arr[ind]=it;
        ind++;
    }


    for(int i=0;i<ind;i++){
        cout<<arr[i]<<endl;
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

    Removeduplicates(arr,n);
    return 0 ;
}