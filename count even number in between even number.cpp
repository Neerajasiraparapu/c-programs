#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0&&i%2!=0){
            count++;
        }
    }
    cout<<count;
}
