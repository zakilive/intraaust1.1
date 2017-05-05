#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t;
    int out,p;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            out=n/7;
            p=out*7;
            p=floor(p);
          //  printf("%f",t);
            if(p==n)
            {
                printf("Case %d: YES\n",i);
            }
            else
            {
                printf("Case %d: NO\n",i);
            }
        }
    }
    return 0;
}
