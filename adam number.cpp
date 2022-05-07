#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0,rem=0,r=0,re=0;
    cin>>n;
    int sq=n*n;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    int rsq=rev*rev;
    while(rsq){
        r=rsq%10;
        re=re*10+r;
        rsq/=10;
    }
    if(sq==re){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
