#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=0;i<=n;i++){
        if(n==i*i){
            cout<<"True";
            return 0;
        }
    }
    cout<<"False";
    return 0;
}
