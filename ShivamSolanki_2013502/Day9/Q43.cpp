class Solution {
public:
    string addBinary(string a, string b) {
        char carry='0';
        int x=a.size();
        int y=b.size();
        string s="";
         int diff=abs(x-y);
        if(x>y)
            for(int i=0;i<diff;i++)
            b.insert(0,"0");
        else
           for(int i=0;i<diff;i++)
            a.insert(0,"0");
        for(int i=a.size()-1;i>=0;i--)
        {
         if(a[i]==b[i]&&a[i]=='1')
         {
            s=carry+s;
            
                
             carry='1';
         }
            else if(a[i]==b[i])
            {
                s= carry+s;
                carry='0';
            }
            else
            {
                if(carry=='0')
                s='1'+s;
                else
                {
                    s= '0'+s;
                carry='1';
                    }
            }
            
        }if(carry=='1')
                s.insert(0,"1");
        return s;
        
    }
};
