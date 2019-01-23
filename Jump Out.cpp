//https://www.hackerearth.com/challenge/competitive/june-circuits-17/algorithm/dexter-plays-with-gp-1/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long n,i,x=0;
    cin>>n;
    long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(i+a[i]>=n)
        {
            x=i+1;
            break;
        }
    }
    cout<<x;
    return 0;
}