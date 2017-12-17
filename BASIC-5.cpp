#include <bits/stdc++.h>
#define maxn 10005
int num[maxn]={0};
int main()
{
    int n,a;
    memset(num,0,sizeof(num));
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(num[a]==0)
            num[a]=i;
        else
            continue;
    }
    scanf("%d",&a);
    if(num[a]==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",num[a]);
    }
    return 0;
}
