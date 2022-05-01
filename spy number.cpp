#include<bits/stdc++.h>
using namespace std;
void spynumber(int n){
    int sum=0,product=1;
    while(n>0){
        int r=n%10;
        sum+=r;
        product*=r;
        n/=10;
    }
    if(product==sum)
    {
        cout<<"Spy Number";
    }
    else
    {
       cout<<"Not Spy Number" ;
    }
}
int main(){
    int n;
    cin>>n;
    spynumber(n);
}
