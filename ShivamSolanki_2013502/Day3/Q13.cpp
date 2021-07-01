class Solution {
public:
    string truncateSentence(string s, int k) {
        string ts="";
        s=s+" ";
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(isspace(s[i])&&--k==0){
            ts+=s.substr(j,i);
                j=i+1;
            }  
        }
        return ts;
    }
};
