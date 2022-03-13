class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int>res;
        int count=0;
        
        for(int i=M;i<=N;i++){
            count =0;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    count ++;
                    break;
                }
            }
            if(i==1);
            else if(count==0){
                res.push_back(i);
            }
        }
        return res;
    }
};
