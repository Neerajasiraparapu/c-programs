class Solution{
public:
    int primeSum(int N){
        // code here
        int sum=0;
        while(N){
            int s=N%10;
            N=N/10;
            sum +=isprime(s);
        }
        return sum;
    }
    int isprime(int N){
        if(N==1)
        return 0;
        for(int i=2;i*i<=N;i++){
            if(N%i==0){
                return 0;
            }
        }
        return N;
    }
};
