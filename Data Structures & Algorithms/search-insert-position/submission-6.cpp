class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int low=0;
        // int high=nums.size()-1;
        // while(low<=high){
        //     int mid=(low+high)/2;
        //     // cout<<mid<<endl;
        //     if(nums[mid]==target){
        //         return mid;
        //     }
        // //  if(low==high && high==0){
        // //         return 0;
        // //     }
        // //     if(low==high && low==nums.size()){
        // //         return nums.size();
        // //     }
         
        //     if(nums[mid]<target){
        //         if(mid==nums.size()){
        //             return nums.size()+1;
        //         }
        //         low=mid+1;
        //         // cout<<low<<" "<<mid<<" "<<endl;
        //         if(nums[low]>target){
        //             return low;
        //         }
        //     }
        //     else if(nums[mid]>target){
        //         if(mid==0){
        //             return 0;
        //         }
        //         high=mid-1;
        //         if(nums[high]<target){
        //             return high;
        //         }
        //     }
            // else if(low==high && high==0){
            //     return 0;
            // }
        //  if(low==high && high==0){
        //         return nums.size()+1;
        //     }
        //  if(nums[mid]==target){
        //         return nums[mid];
        //     }
        vector<int> v = nums;
        int l=0,r=(int)v.size()-1;

        while(l<r){
            int mid=(l+r+1)/2;
            if(v[mid]<=target){
                l=mid;
            }else{
                r=mid-1;
            }
        }
        if(l==0 && v[0]>target){
            return 0;
        }
        if(v[l]==target){
            return l;
        }else{
            return l+1;
        }
    }
};