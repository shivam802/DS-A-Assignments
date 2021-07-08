class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

          int n=strs.size();
            int minimum=min(strs[0].size(),strs[n-1].size());
        string word="";
        for(int i=0;i<minimum;i++){

            if(strs[0][i]==strs[n-1][i])
            {
                word+=strs[0][i];

            }
            else return word;

        }
        return word;
    }
};
