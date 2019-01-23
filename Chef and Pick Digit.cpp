// LINK: https://www.codechef.com/SEPT17/problems/CHEFPDIG
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long int
 
int main()
{
	ll t,i;
	cin>>t;
	for(i=0; i<t; i++)
	{
		string s,o="";
		cin>>s;
		ll j,a[10]={0};
		for(j=0; j<s.length(); j++)
		a[(int)(s[j]-'0')]++;
		
		if(a[6]>0)
		{
			if(a[5]>0)
			o+="A";
			
			if(a[6]>1)
			o+="B";
			
			if(a[7]>0)
			o+="C";
			
			if(a[8]>0)
			o+="D";
			
			if(a[9]>0)
			o+="E";
		}
		if(a[7]>0)
		{
			if(a[0]>0)
			o+="F";
			
			if(a[1]>0)
			o+="G";
			
			if(a[2]>0)
			o+="H";
			
			if(a[3]>0)
			o+="I";
			
			if(a[4]>0)
			o+="J";
			
			if(a[5]>0)
			o+="K";
			
			if(a[6]>0)
			o+="L";
			
			if(a[7]>1)
			o+="M";
			
			if(a[8]>0)
			o+="N";
			
			if(a[9]>0)
			o+="O";
		}
		
		if(a[8]>0)
		{
			if(a[0]>0)
			o+="P";
			
			if(a[1]>0)
			o+="Q";
			
			if(a[2]>0)
			o+="R";
			
			if(a[3]>0)
			o+="S";
			
			if(a[4]>0)
			o+="T";
			
			if(a[5]>0)
			o+="U";
			
			if(a[6]>0)
			o+="V";
			
			if(a[7]>0)
			o+="W";
			
			if(a[8]>1)
			o+="X";
			
			if(a[9]>0)
			o+="Y";
		}
		if(a[9]>0&&a[0]>0)
		o+="Z";
		
		if(o.length())
		cout<<o;
		else
		cout<<" ";
		cout<<endl;
	}
	return 0;
} 
