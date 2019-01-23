#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
#define s 10001
using namespace std;
 
 
int main() 
{
    int a[s];
    for(int i = 0; i<s;i++)
    {
        a[i]=0;
    }
    int n, m;
    scanf("%d", &n);
    int temp;
    for(int j=0; j<n; j++)
    {
        scanf("%d", &temp);
        a[temp]+=1;
    }
    scanf("%d", &m);
    for(int k =0; k<m; k++)
    {
        scanf("%d", &temp);
        a[temp]-=1;
    }
    for(int i =0; i<s; i++)
    {
        if(a[i]<0) 
		printf("%d ", i);
    }
    return 0;
}
