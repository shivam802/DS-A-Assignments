class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(n!=t.size()) return false;
       
        int m[26] ;
        memset(m,0,sizeof(m));
        for(int i=0;i<n;i++)
        {
            m[s[i]-'a']++;
            m[t[i]-'a']--;
            
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]-'a']!=0)
                return false;
        }
        
        return true;
    }
};
