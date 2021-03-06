class Solution {
public:
    int m(char c)
    {
        switch (c)
        {
                 
            case 'I':  return 1;
            case 'V':return 5;
           case 'X' : return 10;
            case 'L':return 50;
           case 'C' :return 100;
        case 'D'    : return 500;
        case 'M'    : return 1000;

        }
        return 0;
    }
    int romanToInt(string s) {
    
        int n=s.size();
       int  total=m(s[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(m(s[i])< m(s[i+1]))
                total= total-m(s[i]);
            else
                total=total+m(s[i]);
            
        }
        return total;
        
    }
};
