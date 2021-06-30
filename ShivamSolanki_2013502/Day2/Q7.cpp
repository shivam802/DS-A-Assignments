#include<bits/stdc++.h>
using namespace std;
int goodPair (int* arr, int n)
{
int gP = 0;
map <int, int> freq;
for (int i = 0; i < n; i++)
{
freq[arr[i]]++;
if (freq[arr[i]] > 1)
gP += freq[arr[i]] - 1;
}
return gP;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<goodPair(arr,n);
}
