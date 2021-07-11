class Solution {
public:
    int longestPalindrome(string s) {
     
        int az[26],cap[26];
            memset(az,0,sizeof(az));
          memset(cap,0,sizeof(cap));
        int k=0,sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i])) cap[s[i]-'A']++;
           else
            az[s[i]-'a']++;
            
        }
        for(int i=0;i<26;i++)
        {
             k+=az[i]%2;
            if(1)
            {cout<<"s";
                sum+=az[i]-az[i]%2;
            }
        }
          for(int i=0;i<26;i++)
        {
             k+=cap[i]%2;
            if(1)
            {
                sum+=cap[i]-cap[i]%2;
            }
        }
        if(k)
            return sum+1;
        else
            return sum;
        
        
             
        
    }
};
