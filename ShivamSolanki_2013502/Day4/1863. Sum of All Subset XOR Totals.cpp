class Solution {
public:
    int Sum(vector<int> &arr,int i,int n,int sum)
     {  
         if(i==n) return sum ;
       
          
       return  Sum(arr,i+1, n,sum^arr[i])+Sum(arr,i+1, n,sum); 
     }
    
    int subsetXORSum(vector<int>& arr) {
        int sum=0;
               
        return  Sum(arr,0,arr.size(),sum);
    }
};
