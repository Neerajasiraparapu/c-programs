#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,rev=0,rem;
    cin>>N;
    while(N){
         rem=N%10;
    rev=rev*10+rem;
    N/=10;
    }
    cout<<rev;

}
