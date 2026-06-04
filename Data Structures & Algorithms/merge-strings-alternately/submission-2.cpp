class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int t=0;
        int x=0;
        int y=word1.size();
        int z=word2.size();
        if(y>z){
            while(t<y){
                word3+=word1[t]; 
                t++; 
                if(x<z){
                    word3+=word2[x];
                }
                x++; 
            }

        }
        if(y<z){
            while(x<z){
                if(t<y){
                   word3+=word1[t];
                }
                t++;
                word3+=word2[x]; 
                x++; 
            }

        }
        if(z==y){
            while(x<z){
                word3+=word1[t];
                word3+=word2[x];
                t++;
                x++;

            }
        }
        return word3;
    }
};