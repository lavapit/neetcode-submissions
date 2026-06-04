class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        if(n==1){
            return n;
        }
        for(int i=0;i<n-1;i++){
            int j=i+1;
            if(nums[i]!=nums[j]){
                v.push_back(nums[i]);
                // if(j==n-1){
                //     v.push_back(nums[j]);
                // }
                cout<<nums[i]<<" "<<nums[j]<<endl;
            }
            if(j==n-1){
                    v.push_back(nums[j]);
                }
        }
        nums.clear();
        int k=v.size();
        for(int i=0;i<k;i++){
            nums.push_back(v[i]);
        }
        return k;
    }
};