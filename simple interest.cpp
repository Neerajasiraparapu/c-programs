Given P,T,R and then find Simple interest .

 

INPUT FORMAT

P,T,R - principle amount , time, rate of interest

OUTPUT FORMAT 

Simple interset

 

Sample Input :

100 20 10

Output Format:

200
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P,T,R,simpleinterest,cal;
    cin>>P >>T >>R;
    cal=P*T*R;
    simpleinterest=cal/100;
    cout<<simpleinterest;
}
