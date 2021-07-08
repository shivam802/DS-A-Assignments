class Solution {
public:
    string check(string s1,string s2)
    {
        int minimum=min(s1.size(),s2.size());
        string word="";
        for( int i=0;i<minimum;i++)
        {
            if(s1[i]==s2[i])
            {
                word+=s1[i];
            }
            else
                break;

        }
        return word;
    }
    string merge(vector<string> & strs,int left,int right)
    {
        if(left==right) return strs[left];
        else
        {
             int mid= (right+left)/2;
            string s1=merge(strs,left,mid);
            string s2=merge(strs,mid+1,right);

            return check(s1,s2);

        }
    }

    string longestCommonPrefix(vector<string>& strs) {
        return   merge(strs,0,strs.size()-1);

    }
};
