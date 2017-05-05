#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,sum=0;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++){
            scanf("%d",&p);
            sum+=p;
        }
        printf("Total = %d\n",sum);
        sum=0;
    }
 return 0;
}
