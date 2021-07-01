class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=index.size();
        vector<int> t;
        for(int i=0;i<n;i++)
        {
            t.insert(t.begin()+index[i],nums[i]);
        }
        return t;
    }
};
