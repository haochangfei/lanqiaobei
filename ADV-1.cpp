#include"stdio.h"
#include"string.h"
#include"math.h"
#define M 100009
#include"vector"
#include"queue"
#include"stdlib.h"
#include"deque"
#define eps 1e-3
#define PI acos(-1.0)
#define inf 10000000000000LL
#include"algorithm"
using namespace std;
struct node
{
    double x,y;
    bool operator<(const node &p)const
    {
        return x<p.x;
    }
}p[M];
int Log[M];
double maxl[M],minl[M],maxr[M],minr[M],val[M];
double dp_max[M][33],dp_min[M][33];
void initLog()
{
    Log[0]=-1;
    for(int i=1;i<M;i++)
    {
        Log[i]=(i&(i-1))==0?Log[i-1]+1:Log[i-1];
    }
}
void RMQ(int n)
{
    int m=Log[n];
    for(int i=1;i<=n;i++)
        dp_max[i][0]=dp_min[i][0]=p[i].y;
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n+1-(1<<j);i++)
        {
            dp_max[i][j]=max(dp_max[i][j-1],dp_max[i+(1<<(j-1))][j-1]);
            dp_min[i][j]=min(dp_min[i][j-1],dp_min[i+(1<<(j-1))][j-1]);
        }
    }
}
double lcp_max(int l,int r)
{
    int m=Log[r-l+1];
    return max(dp_max[l][m],dp_max[r+1-(1<<m)][m]);
}
double lcp_min(int l,int r)
{
    int m=Log[r-l+1];
    return min(dp_min[l][m],dp_min[r+1-(1<<m)][m]);
}
double max(double a,double b)
{
    return a>b?a:b;
}
double min(double a,double b)
{
    return a<b?a:b;
}
node ver(node a)
{
    double L=sqrt(a.x*a.x+a.y*a.y);
    double du=asin(a.y/L);
    du+=PI/4;
    a.x=L*cos(du);
    a.y=L*sin(du);
    return a;
}
//分别从两端记录最大值和最小值
void init(int n)
{
    maxl[1]=minl[1]=p[1].y;
    for(int i=2;i<=n;i++)
    {
        maxl[i]=max(p[i].y,maxl[i-1]);
        minl[i]=min(p[i].y,minl[i-1]);
    }
    maxr[n]=minr[n]=p[n].y;
    for(int i=n-1;i>=1;i--)
    {
        maxr[i]=max(p[i].y,maxr[i+1]);
        minr[i]=min(p[i].y,minr[i+1]);
    }
}
int judge(int n,double mid)
{
    int left=1,right=1;
    for(left=1;left<=n;left++)
    {
        double up=-inf;
        double down=inf;
        while(right<=n&&p[right].x-p[left].x<=mid*2)
        {
            right++;
        }
        if(left>1)
        {
            up=max(up,lcp_max(1,left-1));
            down=min(down,lcp_min(1,left-1));
        }
        if(right<=n)
        {
            up=max(up,lcp_max(right,n));
            down=min(down,lcp_min(right,n));
        }
        if(up-down<=mid*2)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    initLog();
    while(scanf("%d",&n)!=-1)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%lf%lf",&p[i].x,&p[i].y);
            p[i]=ver(p[i]);
        }
        sort(p+1,p+n+1);
        double l=0,r=max(p[n].x-p[1].x,maxl[n]-minl[n]);
        double mid;
        //init(n);
        RMQ(n);
        while(fabs(r-l)>eps)
        {
            mid=(l+r)/2;
            if(judge(n,mid))
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        printf("%.1lf\n",r*sqrt(2.0));
    }
    return 0;
}
