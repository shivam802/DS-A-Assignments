class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> t;
        t.push_back(first);
        int res=(first^encoded[0]);
        t.push_back(res);
        for(int i=0;i<encoded.size()-1;i++)
        {
            t.push_back(res^encoded[i+1]);
            res=res^encoded[i+1];
        }
        return t;
    }
};
