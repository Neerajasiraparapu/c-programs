#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int num=x;
    
    int reversed=0,remainder;
    while (x != 0) { 
    int remainder = x % 10; 
    reversed = reversed * 10 + remainder;            
    x/=10;
    }
    if(reversed==num){
        return true;
    }
    else
    return false;
}

int main() {
    int n;
    cin >>n;
    if(isPalindrome(n)) {
        cout <<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
}
