#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,prefix[10]={0};
    bool b=false;
    cin>>n;
    while(n>0){
      r=n%10;
      if(prefix[r]==0){
          prefix[r]++;
          n/=10;
      }
      else{
          cout<<"Not Unique Number";
          b=true;
          break;
      }
    }
    if(!b){
        cout<<"Unique Number";
    }
    
}
