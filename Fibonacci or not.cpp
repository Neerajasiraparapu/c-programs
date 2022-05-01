#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,c,n;
    cin>>n;
    for(int i=1;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            if(n==c){
                cout<<"True";
                return 0;
            }
        }
        cout<<"False";
        return 0;
}
