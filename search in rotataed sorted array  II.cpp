class Solution {
public:
    bool search(vector<int>& nums, int target) {
      if(target>nums[0]){
          for(int i=0;i<nums.size();i++){
              if(target==nums[i])
              return 1;
              }
          } 
    else if(target<nums[0]){
        for(int i=nums.size()-1;i>=0;i--){
            if(target==nums[i])
                return 1;
            }
        }
    else{
        return 1;
    }
        
    return 0;
    }
};
