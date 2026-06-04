class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = 0; 
        int y = 0; 
        int l = 0; 
        
        vector<int> v;
        for(int i = 0; i < m; i++){
            v.push_back(nums1[i]);
        }

        while(l < m + n){
            
            if (x < m && y < n) {
                if (v[x] <= nums2[y]) {
                    nums1[l] = v[x];
                    x++;
                } else {
                    nums1[l] = nums2[y];
                    y++;
                }
            }
          
            else if (x >= m && y < n) {
                nums1[l] = nums2[y];
                y++;
            }
           
            else if (y >= n && x < m) {
                nums1[l] = v[x];
                x++;
            }
            l++;
        }
    }
};