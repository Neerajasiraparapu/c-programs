#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,r,sum=0;
    cin>>n;
    cin>>m;
    for(int i=n;i<=m;i++){
        int val=i;
        while(val>0){
            r=val%10;
          if(r==0||i%r!=0){
          break;
          }
            val/=10;
        }
        if(val==0){
            cout<<i<<" ";
        }
    }
}
