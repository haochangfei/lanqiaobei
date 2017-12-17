#include <bits/stdc++.h>
#define maxn 37
int main()
{
    int num[maxn][maxn];
    memset(num,0,sizeof(num));
    num[1][1]=1;
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("1\n");
    else
    {
        for(int i=2; i<=n+1; i++)
        {
            for(int j=2; j<=i; j++)
            {
                num[i][j]=num[i-1][j]+num[i-1][j-1];
                if(j==2)
                {
                    printf("%d",num[i][j]);
                }
                else
                    printf(" %d",num[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
