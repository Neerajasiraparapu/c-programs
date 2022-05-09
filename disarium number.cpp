#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,r=0,sum=0,temp=0;
    cin>>n;
    int num=n;
    temp=n;
    while(n){
        n/=10;
        count++;
    }
    while(num>0){
        r=num%10;
        sum+=pow(r,count);
        count--;
        num/=10;
    }
    if(sum==temp){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
