#include <bits/stdc++.h>
#define maxn 1005
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m;
    int num[maxn];
    int num2[maxn];
    int l,r,k,ln;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d%d%d",&l,&r,&k);
        ln=r-l;
        for(int i=0; i<=ln; i++)
        {
            num2[i]=num[i+l-1];
        }
        sort(num2,num2+ln+1,cmp);

        printf("%d\n",num2[k-1]);
    }
    return 0;
}
