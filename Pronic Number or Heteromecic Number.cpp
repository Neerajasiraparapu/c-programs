#include<bits/stdc++.h>
using namespace std;
int main(){
    int pronic ,i,count=0;
    cin>>pronic;
    for(i=1;i<=pronic;i++)
    {
        if(i*(i+1)==pronic){
            count=1;
            break;
            
        }
    }
    if(count==1){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
