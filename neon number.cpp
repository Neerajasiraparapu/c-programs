#include<bits/stdc++.h>
using namespace std;
void neonnumber(int n){
    int sum=0;
    int sq=n*n;
    while(sq){
        int r=sq%10;
        sum+=r;
        sq/=10;
    }
    if(n==sum)
    {
        cout<<"Neon Number";
    }
    else
    {
       cout<<"Not Neon Number" ;
    }
}
int main(){
    int n;
    cin>>n;
    neonnumber(n);
}
