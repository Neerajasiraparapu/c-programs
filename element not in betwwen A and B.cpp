#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,i,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,m;
    cin>>l>>m;
    for(int i=0;i<n;i++){
        if(arr[i]>=l&&arr[i]<=m)
        {
          continue;
        }
        else
        {
            cout<<arr[i]<<" ";
            count=count+1;
        }
    }if(count==0)
    {
        cout<<"-1";
    }
   
}
