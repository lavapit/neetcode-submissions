class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> a;
        for(int i=s.size()-1;i>=0;i--){
            int j=0;
            a.push_back(s[i]);
        }
        for(int i=0;i<s.size();i++){
            s[i]=a[i];
        }
    }
};