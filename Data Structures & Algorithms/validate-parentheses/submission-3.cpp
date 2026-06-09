class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        if(n%2!=0){
            return false;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('  || s[i]=='[' || s[i]=='{'){
                cout<<s[i]<<endl;
                st.push(s[i]);
                cout<<st.top()<<"segse"<<endl;
            }
            else if(!st.empty()){
                cout<<s[i]<<endl;
                if(s[i]==')' && st.top()=='(' ){
                    count++;
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='[' ){
                    count++;
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{' ){
                    count++;
                    st.pop();
                }
            }
        }
        // cout<<count;
        if(count==n/2){
            return true;
        }
        else{
            return false;
        }
        
    }
};
