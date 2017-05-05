#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n!=0)
            {
                printf("Case %d: %d\n",i,6);
            }
            else
            {
                printf("Case %d: %d\n",i,1);
            }
        }

    }
    return 0;
}
