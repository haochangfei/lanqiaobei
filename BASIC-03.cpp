#include <bits/stdc++.h>
#define maxn 27

int num[maxn][maxn];

int main()
{
    int n,m;
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            num[i][j]=abs(j-i);
        }
    }
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%c",'A'+num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
