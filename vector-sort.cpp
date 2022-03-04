#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    vector<int>N{1,6,10,8,4};
    sort(N.begin(),N.end());
    for(const int i:N)
    {
        cout<<i<<" ";
    }
    return 0;
}
