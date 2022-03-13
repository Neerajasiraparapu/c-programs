string isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        // Write your logic here
        // Return "Yes" if n is prime, else return "No"
        /*n is prime only if it is not divisible by any i.
        We will not reach till n and 1 is already discarded*/
        if(n%i==0)
        {
            return "No";
        }
        
    }
    if(n==1)
    {
        return "No";
    }   
    else{
        return "Yes";
    }
}
