#include<bits/stdc++.h>
using namespace std;


string sum2problem(vector<int> &a ,int target){
     
     sort(a.begin(),a.end());
    
     int n=a.size();
     int left=0,right=n-1;
     while(left<right){


    int sum=a[left] + a[right];
        if(sum==target){
            return "true";
        
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
     }

     return "no";
}
int main(){

   
    int n,target;

    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter the element in array";
         cin>>a[i];
    }
   cout<<"enter the target";
    cin>>target;
    vector<int> vec(a,a + sizeof(a) / sizeof(a[0]));
    cout<<sum2problem(vec,target);
    
   return 0;
}