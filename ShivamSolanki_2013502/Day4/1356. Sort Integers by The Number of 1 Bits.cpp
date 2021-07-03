class Solution {
public:
   static int total1( int a)
    {
       int count = 0;
    while (a) {
        if (a & 1)
            count += 1;
        a = a >> 1;
    }
    return count;
    
    }
  static int cmp(int a,int b)
    {
        int a1 = total1(a);
        int b1=total1(b);
       if(a1 == b1)
            return a < b;
        return a1 < b1;
   }
    vector<int> sortByBits(vector<int>& arr) {
        
         sort(arr.begin(),arr.end(),cmp);

    
        return arr;
        
    }
};
