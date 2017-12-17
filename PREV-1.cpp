#include <bits/stdc++.h>

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}

int main()
{
    int a,b,c;
    int num;
    scanf("%d%d%d",&a,&b,&c);
    num=lcm(lcm(a,b),c);
    printf("%d\n",num);
    return 0;
}
