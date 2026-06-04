class Solution {
public:
    bool validPalindrome(string s) {
    // transform(s.begin(), s.end(), s.begin(), ::tolower); 
    
    string s1;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || (s[i]>='A' && s[i]<='Z')){
            s1+=s[i];
        }
    }
    cout<<s1<<endl;
    int x=0;
    int y=n-1;
    int count=0;
    while(x<y){
        if(s1[x]==s1[y]){
            x++;
            y--;
        }
        else if(s1[x]!=s1[y]){
            count++;
            y--;
        }

    }
    int l=0;
    int t=0;
    int z=n-1;

    if(count>1){
 while(t<z){
        if(s1[t]==s1[z]){
            t++;
            z--;
        }
        else if(s1[t]!=s1[z]){
            l++;
            t++;
        }

    }
    }



    if(count==0 || count==1 || l==0 || l==1){
        return true;
    }
    else{
        return false;
    }
    
    }
};