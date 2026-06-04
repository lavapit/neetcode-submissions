#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int n = s.size();
        string ss;

     for (int i = 0; i < n; i++) {
    if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
        ss += s[i];
    }
}

        cout<<ss<<endl;

        int x=0;
        int y=ss.size()-1;
         cout<<s;
        // string t=s;
        // // for(int i=0;i<s.size();i++){
        // //     t[i]=s[i];
        // // }
        int count=0;
        
         while(x<y){
         if(ss[x]!=ss[y]){
              count++;
         }
            x++ ;
            y-- ;
         }
        // cout<<s<<endl;
        // cout<<t;
        // if(t==s){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        if(count==0){
            return true;
        }
        else{
            return false;
        }

    }
};
