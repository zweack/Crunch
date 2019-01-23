#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int fab(int n){
	if((n==1)||(n==2))
	return 1 ;
	else 
	return fab(n-1)+fab(n-2);
}
int main()
{
	int n;
	cin>>n;
	fab(n);
	return 0;
}

