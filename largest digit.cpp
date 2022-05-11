#include<bits/stdc++.h>
using namespace std;
int main(){
     int  n,r,max=0;
     cin>>n;
     while(n){
       r=n%10;
       if(r>max){
         r=max;
       }
       n/=10;
     }
  cout<<max;
}
