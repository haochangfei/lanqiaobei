#include <bits/stdc++.h>

int main()
{
    int n;
    int a;
    int sum=0;
    int minn,maxn;
    scanf("%d",&n);
    scanf("%d",&a);
    minn=a;
    maxn=a;
    sum+=a;
    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a>maxn)
            maxn=a;
        if(a<minn)
            minn=a;
        sum+=a;
    }
    printf("%d\n%d\n%d\n",maxn,minn,sum);
    return 0;
}
