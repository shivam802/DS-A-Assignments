class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        while(n)
        {cout<<n;
         char x;
            
                x=((n-1)%26)+'A';
                
              s= x+s;
            
        
         n=(n-1)/26;
         
        
        }
        return s;
        
    }
};
