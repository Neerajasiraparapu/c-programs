#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cin>>n;
    do{
        c=a+b;
        a=b;
        b=c;
    }while(c<=n);
    int min=n-a;
    int max=b-n;
    if(min>max){
        cout<<b;
    }
    else if(min==max){
        cout<<a<<" "<<b;
    }
    else{
        cout<<a;
    }
}
