#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem=0,rev=0,sq,r=0,rs=0;
    bool b=false;
    cin>>n;
    sq=n*n;
    while(n){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    while(sq){
        r=sq%10;
        rs=rs*10+r;
        if(rev==rs){
            cout<<"Automorphic Number";
            b=true;
            break;
        }
        sq/=10;
    }
    if(!b){
        cout<<"Not an Automorphic Number";
    }
}





second code : using count
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,sq=0;
    cin>>n;
    int num=n;
    sq=n*n;
    while(n){
        n/=10;
        count++;
    }
    int m=pow(10,count);
    if((sq%m)==num){
        cout<<"Automorphic Number";
    }
    else{
        cout<<"Not an Automorphic Number";
    }
}
