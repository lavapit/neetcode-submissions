class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0], nums[1]);
        }
        if(nums.empty()){
        return 0;
        }
        vector<int> dp(n);
        vector<int> dpp(n);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        dpp[1]=nums[1];
        dpp[2]=max(nums[1],nums[2]);
        for(int i=2;i<n-1;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        for(int i=3;i<n;i++){
            dpp[i]=max(nums[i]+dpp[i-2],dpp[i-1]);
        }
        cout<<dp[n-1]<<" "<<dpp[n-1]<<endl;
        // if(dp[n-1]<=dpp[n-1]){
        //     return dpp[n-1];
        // }
        // else{
        //     return dp[n-2];
        // }
        return max(dp[n-2], dpp[n-1]);
    }
};
