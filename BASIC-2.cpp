#include <bits/stdc++.h>
using namespace std;
int num[5]={0};

int f(int n)
{
    int l=0;
    memset(num,0,sizeof(num));
    while(n)
    {
        num[l++]=n%2;
        n=n/2;
    }
    return 0;
}

int ff(int n)
{
    f(n);
    reverse(num,num+5);
    for(int i=0;i<5;i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
    for(int i=0;i<32;i++)
    {
        ff(i);
    }
    return 0;
}
