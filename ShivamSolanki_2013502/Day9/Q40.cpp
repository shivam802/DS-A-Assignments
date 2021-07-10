class Solution {
public:
   
    bool isValid(string arr) {
        
        stack<char> s;
        
        for(int i=0;i<arr.size();i++)
        {
                
             if(arr[i]=='('||arr[i]=='{'||arr[i]=='[')
                 s.push(arr[i]);
           else if(s.size()&&( arr[i]=='}'&&s.top()=='{'||arr[i]==')'&&s.top()=='('|| arr[i]==']'&&s.top()=='['))
           {
                
               s.pop();
                                     
           }
            else{
                return false;
            }
        }
        if(s.size())return false;
        return true;
    }
};
