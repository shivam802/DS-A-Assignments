class Solution {
public:
    string addStrings(string num1, string num2) {
int n=num1.size();
        string res="";
        int m=num2.size();
        int carry=0;
        for(int i=n-1,j=m-1;i>=0||j>=0;i--,j--)
        {int sum=0;int n1=0,n2=0;
            if(i>=0)
                n1=num1[i]-'0';
            if(j>=0)
                n2=num2[j]-'0';
         
            sum=n1+n2+carry;
         cout<<n1<<":"<<n2<<endl;
            carry=sum/10;
            sum=sum%10;
         
            res=  to_string(sum)+res;
         
         
            
        }
        if(carry)
        res="1"+res;
        return res;
        
    }
};
