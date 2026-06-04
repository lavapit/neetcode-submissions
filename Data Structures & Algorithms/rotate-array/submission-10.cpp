class Solution {
public:
      void reverse(vector<int>& nums, int l, int r) {
        while (l < r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>nums.size()){
            k=k%nums.size();
        }
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
        // vector<int> z;
        // int l=k-1;
        // int r=nums.size()-1;
        // if(nums.size()%2==0){
        // while(r>=k){
        //     swap(nums[l],nums[r]);
        //     l--;
        //     r--;
        // }
        // }
        // else{
        //     while(r>=k){
        //     int x=nums[0];
        //     swap(nums[l],nums[r]);
        //     l--;
        //     r--;
        //     // if(r<k){
        //     //     nums[k+!]=x;
        //     // }
        // }
        // }
        // // cout<<nums[k]<<endl;

    }
};