class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int n=s.size();
        int flag=0;
       
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
                flag=1;
             if(flag==0&&s[i]==' ')
                 continue;
            if(s[i]==' ')
                break;
            c++;
        }
        
        return c;
        
    }
};
