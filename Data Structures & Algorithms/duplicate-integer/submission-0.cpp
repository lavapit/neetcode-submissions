class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool flag=false;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>1){
                flag=true;
                break;
            }
            count=0;
        }
        return flag;
        
    }
};