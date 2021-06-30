#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,num;
cin>>m>>n;
vector<vector<int>> accounts(m);
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>num;
accounts[i].push_back(num);
}
}
int max=0,cust=0,sum=0;;
for(int i=0;i<m;i++)
{sum=0;
for(int j=0;j<n;j++)
{
sum=sum+accounts[i][j];
}
if(sum>max){
max=sum;
cust=i+1;
}
}
cout<<cust;
}
