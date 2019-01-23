//Seive of Atkins for Prime Numbers up to a Limit
//Time Complexity O(N/loglogN)

#include<bits/stdc++.h>
using namespace std;

int SeiveofAtkins(long long limit)
{
	bool seive[limit];    //We will start with 5, so print 2 and 3
	if(limit>2)
	cout<<"2 ";
	if(limit>3)
	cout<<"3 ";

	long long i,j,x,y;

	for(i=0; i<limit; i++)
	seive[i]=false;   // We will set initially that all numbers are not prime

	for(x=1; x*x<limit; x++) //Now we will check for 3 cases by checking remainder with 12 for n in each case
	{
		for(y=1; y*y<limit; y++)
		{
			long long n;
			n= 4*x*x+y*y;
			if(n<=limit&&(n%12==1||n%12==5))
			seive[n]^=true; // We need to take XOR here to flip the boolean value

			n=3*x*x+y*y;
			if(n<=limit&&n%12==7)
			seive[n]^=true;

			n=3*x*x-y*y;
			if(x>y&&n<=limit&&n%12==11)
			seive[n]^=true;
		}
	}

	for(j=5; j*j<limit; j++)
	{
		if(seive[j])
		{
			for(i=j*j; i<limit; i+=j*j)
			{
				seive[i]=false;
			}
		}
	}
	for(i=5; i<limit; i++)
	if(seive[i])
	cout<<i<<" ";
	return 0;
}

int main()
{
	long long limit;
	cin>>limit;
	SeiveofAtkins(limit);
	return 0;
}
