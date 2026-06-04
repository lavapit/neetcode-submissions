class Solution {
public:
    int eb(vector<int>& piles, int h){
        int y=*max_element(piles.begin(), piles.end());
        // vector<int> v;
        // for(int i=0;i<y;i++){
        //     v[i].push_back(i+1);
        // }
        // cout<<y<<endl;
        int l=1;
        int r=y;
        while(l<r){
            int x=0;
            int mid=(l+r)/2;
            // cout<<l<<" "<<r<<" "<<mid<<endl;
            for(int i=0;i<piles.size();i++){
                int t=(((piles[i]+mid-1))/mid);
                x=x+t;
            }
            if(x<=h){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int x=eb(piles,h);
        return x;
    }
};
