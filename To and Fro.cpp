#include<bits/stdc++.h>

using namespace std;



int main()
{
	long long n;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		else
		{
			string s;
			long l,r,i,j,k=0;
			cin>>s;
			l=s.length();
			r=l/n;
			const char *y=s.c_str();
			char x[r][n];
			for(i=0; i<r; i++)
			{
				if(i%2==0)
				{
					k=(i*n);
					for(j=0; j<n; j++)
					{
						x[i][j]=y[k++];
				
					}
				}
				if(i%2!=0)
				{
					k=((i+1)*n)-1;
					for(j=0; j<n; j++)
					{
						x[i][j]=y[k--];
				
					}
				}
			}
			
			for(i=0; i<n; i++)
			{
				for(j=0; j<r; j++)
				{
					cout<<x[j][i];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
