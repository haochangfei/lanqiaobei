#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
char ch[maxn];
int main()
{
    long long ans=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        sscanf(ch,"%x",&ans);
        sprintf(ch,"%o",ans);
        cout<<ch<<endl;
    }
    return 0;
}
