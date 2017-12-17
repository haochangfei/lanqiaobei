#include <bits/stdc++.h>

int f(int n)
{
    int a,b,c,d;
    a=n%10;
    b=n/1000;

    c=n/10%10;
    d=n/100%10;

    if(a==b && c==d)
        return 1;
    else
        return 0;
}

int main()
{
    for(int i=1000;i<10000;i++)
    {
        if(f(i)==1)
            printf("%d\n",i);
    }
    return 0;
}
