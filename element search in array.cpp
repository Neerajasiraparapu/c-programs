#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    bool b=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<arr[i];i++){
      if(arr[i]==target){
        b=true;
        break;
        }
    }
    if(b){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
