class Solution {
public:
    bool isPalindrome(string s) {
       
         transform(s.begin(), s.end(), s.begin(), ::tolower);
 
        
        
        int i=0,j=s.size()-1;
        while(i<j)
        {
            
            if(!isalnum(s[j])) j--;
            else if(!isalnum(s[i])) i++;
          else if(s[i]!=s[j]) return false;
            else{
                i++;j--;
            }
        }
        return true;
        
    
        
        
    }
};
