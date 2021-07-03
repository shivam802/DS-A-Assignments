class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()==0) return 0;
        for( int i=1;i<arr.size();i++)
        {
            if(arr[i-1]>arr[i])
                return i-1;
        }
        return 0;
            
    }
};
