class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1);
        // int x,y;
        // if(count[0]>=count[1]){
        //     x=count[1];
        //     y=1;
        // }
        // else{
        //     x=count[0];
        //     y=0;
        // }
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++){
            if(dp[i-1]+cost[i-1]>=dp[i-2]+cost[i-2]){
                dp[i]=dp[i-2]+cost[i-2];
            }
            else{
                dp[i]=dp[i-1]+cost[i-1];
            }
        }
        return dp[n];
    }
};
