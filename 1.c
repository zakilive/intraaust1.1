#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double out,t;
    while(scanf("%d",&n)==1)
    {
        if(n!=0)
        {
            out=sqrt(n);
         //   out=pow(n,0.5);
            t=n/out;
            t=floor(t);
          //  printf("%f\n",t);
           // printf("%f\n",out);

            if(t==out)
            {
                printf("Yaay the number is perfect\n");
            }
            else
            {
                printf("Oh no the number isn't perfect\n");
            }
        }
        else
        {
            return 0;
        }
    }



    return 0;
}
