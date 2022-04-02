#include<stdio.h>
int main()
{
    int sum,n,m;
    scanf("%d",sum);
    for(int n=0;n<sum;n++)
    {
        char a[100];
        gets(a);
        int sum1=0,sum2=0;
            for(m=0;a[m]!='/0';m++)
            {
                if(a[m]=='1')sum2++;
                else sum1++;
            }
        
            if(sum1==0||sum2==0)printf("0");
            else{
                if(sum1==sum2)
            {
                printf("%d",sum2-1);
				
            }
            else if(sum1>sum2)printf("%d",sum2);
            else printf("%d",sum1);
            }
            
    }
    return 0;
}