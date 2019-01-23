// Link: https://www.codechef.com/problems/LIKECS01

#include<bits/stdc++.h>

using namespace std;

int main()
{
  long i,t;
  cin>>t;
  for (i=0; i<t; i++)
  {
    string s;
    cin>>s;
    long j,count=0,a[26]={0};
    for(j=0; j<s.length(); j++)
    {
      a[(int)(s[j]-'a')]++;
    }
    for(j=0; j<26; j++)
    if(a[j]>1)
    count++;
    
    if(count>1)
  cout<<"yes"<<endl;
  else
  cout<<"no";
  }
  
  return 0;
}
