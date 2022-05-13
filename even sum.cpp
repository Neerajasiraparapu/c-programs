#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sub=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0;
    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
           even+=arr[i];
       } 
    }
    cout<<even;
}
