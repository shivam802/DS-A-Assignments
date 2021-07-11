class Solution {
public:
    bool canConstruct(string r, string k) {
        if(k.size()<r.size())
        return false;
        map<char,int> m;
        for(int i=0;i<r.size();i++)
        {
            m[r[i]]++;
          
            
        }
        for(int i=0;i<k.size();i++)
        {
              m[k[i]]--;
        }
         for(auto x:r)
         {
             if(m[x]>0)
                 return false;
         }
        return true;
    }
};
