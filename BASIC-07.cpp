#include <bits/stdc++.h>

int f(int n)
{
    int a,b,c;
    a=n/100;
    b=n/10%10;
    c=n%10;
    if( n == a*a*a + b*b*b + c*c*c)
        return 1;
    else
        return 0;
}

int main()
{
    for(int i=100;i<1000;i++)
    {
        if(f(i)==1)
            printf("%d\n",i);
    }
    return 0;
}
