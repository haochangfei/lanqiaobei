#include<bits/stdc++.h>

using namespace std;

int num[32];

int main()
{
    int n;
    cin>>n;
    int i=0;
    int m;
    if(n==0)
    {
        cout<<'0';
        return 0;
    }
    else
    {
        while(n)
        {
            m=n%16;
            num[i]=m;
            i++;
            n=n/16;
        }
        for(int j=i-1; j>=0; j--)
        {
            if(num[j]>9)
            {
                char ch = num[j]-10+'A';
                cout<<ch;
            }
            else
            {
                char ch = num[j]+'0';
                cout<<ch;
            }
        }
    }
    return 0;
}
