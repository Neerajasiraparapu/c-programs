#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n-1],b[n-1],sum[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum[i]=a[i]+b[i];
        cout<<sum[i]<<"\n";
    }
    
}
