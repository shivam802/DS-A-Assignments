class Solution {
public:
    string check(string s1,string s2)
    {
        int minimum=min(s1.size(),s2.size());
          vector<vector<string> > dp(s2.size()+1,vector<string> (s1.size()+1,""));

    for(int i=1;i<=s1.length();i++)
    {
        dp[0][i]=s1[i-1];


    }
      for(int i=1;i<=s2.length();i++)
    {
        dp[i][0]=s2[i-1];


    }

    for(int i=1;i<dp.size();i++)
    {

        for( int j=1;j<dp[0].size();j++)
        {
            if(dp[i][0]==dp[0][j])
            {
                dp[i][j]=dp[i][0];
                if(j-1>=1&&i-1>=1)
                {

                    dp[i][j]=dp[i-1][j-1]+dp[i][j];
                }
            }
        }

    }
    int r=0,c=0;
int max9=0;

      for(int i=1;i<dp.size();i++)
    {

        for( int j=1;j<dp[0].size();j++)
        {
            if(dp[i][j].length()>max9)
            {
                max9=dp[i][j].size();

                r=i;
                c=j;

            }

        }
    }
return dp[r][c];



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

    string longestCommonsubstr(vector<string>& strs) {


        return  merge(strs,0,strs.size()-1);;

    }
};
