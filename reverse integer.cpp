#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,res=0,rem;
    cin>>n;
    while(n){
    rem=n%10;
    res=res*10+rem;
    n/=10;
    }
    cout<<res;
}
