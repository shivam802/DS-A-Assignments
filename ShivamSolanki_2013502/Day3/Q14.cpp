class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<string,int> map;
        int total=0;
      
        for(int j=0;j<words.size();j++){  vector<int> freq(26,0);
        for( int i=0;i<words[j].size();i++)
        {
          freq[words[j][i]-97]=1;cout<<words[j][i];
            
        }int sum=0;
        int x=accumulate(freq.begin(),freq.end(),sum);
      cout<<x;
            for( int m=0;m<allowed.size();m++)
            {
                if(freq[allowed[m]-97]==1)
                    sum++;
            }  if(allowed.size()>=x&&sum==x)
                total++;
        }
        return total;
    }
};
