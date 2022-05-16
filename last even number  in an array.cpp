#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,res;
    bool b=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2==0){
            b=true;
            res=arr[i];
            break;
        }
    }
    if(b){
        cout<<res;
    }
}
