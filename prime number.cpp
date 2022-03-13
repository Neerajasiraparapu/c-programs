int isPrime(int N){
        // code here
        int count=0;
        if(N==1)
        return 0;
        for(int i=2;i*i<=N;i++){
            if(N%i==0) {
            count++;
            return 0;
            }
        }
        if(count==0){
           return 1; 
        }
    }
};
