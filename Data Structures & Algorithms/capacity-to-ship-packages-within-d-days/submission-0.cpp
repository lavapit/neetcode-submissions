class Solution {
public:
    int weight(vector<int>& weights, int days){
        int sum = 0;
        for(int i = 0; i < weights.size(); i++){
            sum += weights[i];
        } 

        int l = *max_element(weights.begin(), weights.end());
        int r = sum; 
        
        while(l < r){
            int mid = l + (r - l) / 2; 
            int x = 0;
            int count = 1;

            for(int i = 0; i < weights.size(); i++){
                if(x + weights[i] > mid){
                    count++; 
                    x = weights[i];
                } else {
                    x += weights[i];
                }
            }

            if(count <= days){
                r = mid; 
            }
            else{
                l = mid + 1; 
            }
        }  
        return l; 
    }

    int shipWithinDays(vector<int>& weights, int days) {
       int y=weight(weights, days);
        return y;
    }
};