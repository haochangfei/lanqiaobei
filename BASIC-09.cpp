#include <bits/stdc++.h>

int main()
{
    int n;
    int a,b,c,d,e,f;
    scanf("%d",&n);
    for(int i=10000;i<1000000;i++)
    {
        if(i<100000)
        {
            a=i%10;
            b=i/10%10;
            c=i/100%10;
            d=i/1000%10;
            e=i/10000;
            if(a==e && b==d && n==a+b+c+d+e)
            printf("%d\n",i);
        }
        else
        {
            a=i%10;
            b=i/10%10;
            c=i/100%10;
            d=i/1000%10;
            e=i/10000%10;
            f=i/100000;
            if(a==f && b==e && c==d && n==a+b+c+d+e+f)
            printf("%d\n",i);
        }
    }
    return 0;
}
