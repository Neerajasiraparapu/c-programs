#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int diva=0,divb=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
           diva +=i; 
        }
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            divb+=i;
        }
    }
    if((a=divb)&&(b==diva)){
        cout<<"Amicable";
    }
    else{
        cout<<"Not Amicable";
    }
}
