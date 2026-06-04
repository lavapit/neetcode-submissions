class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            else if(nums[i]!=nums[i+1]){
                count++;
                if(count>n/2){
                    return nums[i];
                }
                else{
                    count=0;
                }
            }
        }
    }
};