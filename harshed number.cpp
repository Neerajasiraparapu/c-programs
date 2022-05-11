#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,sum=0;
    cin>>n;
    int num=n;
    while(n>0){
        r=n%10;
        sum +=r;
        n/=10; 
    }
    if(num%sum==0)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
