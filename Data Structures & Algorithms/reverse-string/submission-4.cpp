class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> a;
        int x=0;
        int y=s.size()-1;
        while(x<y){
            swap(s[x],s[y]);
            x++ ;
            y-- ;
        }
    }
};