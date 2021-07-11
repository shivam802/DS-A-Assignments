class Solution {
public:int isvowel(char ch)
{
    int check = 0;
    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        check = 1;
    }
    return check;
}
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(isvowel(s[i])&&isvowel(s[j]))
             {   swap(s[i],s[j]);
            i++;j--;}
            else if( !isvowel(s[i])&&!isvowel(s[j]))
               { i++;j--;}
            else
            {
                isvowel(s[i])?j--:i++;
            }
            
        }
        return s;
        
    }
};
