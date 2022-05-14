#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    double avg=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        avg+=arr[i];
    }
    avg/=n;
    cout<<fixed<<setprecision(2)<<double(avg);
    
}
