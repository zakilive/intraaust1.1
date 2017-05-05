#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float c,g,cgpa=0,vag=0,gpa;
    while(scanf("%d",&n)==1)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%f %f",&c,&g);
            cgpa=cgpa+(c*g);
            vag=vag+c;
        }
        gpa=cgpa/vag;
        printf("%.2f\n",gpa);
        cgpa=0;
        vag=0;
    }
    return 0;
}
