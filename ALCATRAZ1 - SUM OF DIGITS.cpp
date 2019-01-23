#include <iostream>
using namespace std;

int main()
{
    long long int low, high, i,j,t, flag;
	cin>>t;
    for(j=0; j<t; j++)
    {
	
    cin >> low >> high;

    while (low <=high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0&&low!=1)
            cout << low <<endl;

        ++low;
    }
    cout<<endl;
}
    return 0;
}
