#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,avg=0,i;
    bool b=false;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg/=n;
    for(int i=0;i<n;i++){
        if(avg==arr[i]){
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
